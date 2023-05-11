#create a new simulator
set ns [new Simulator]

#set routing protocol DV Distance vector
$ns rtproto DV

#create a trace file
set nf [open out.nam w]

#write on trace file
$ns namtrace-all $nf

#exit funtion
proc finish {} {
    global ns nf
    $ns flush-trace
    close $nf
    exec nam out.nam &
    exit 0
}

#create nodes
for {set i 0} {$i < 7} {incr i} {
    set $n($i) [$ns node]
}

#create links
for {set i 0} { $i < 7} {incr i} {
    $ns duplex-link $n($i) $n([expr ($i + 1) % 7]) 1Mb 10ms DropTail
}

# create traffic source
set upd0 [new Agent/UDP]
$ns attach-agent $n(0) $udp0

set cbr0 [new Application/Traffic/CBR]
$cbr0 set packetSize_ 500
$cbr0 set interval_ 0.005
$cbr0 attach-agent $udp0

#create sink
set null0 [new Agent/Null]
$ns attach-agent $n(3) $null0

#connect nodes
$ns connect $udp0 $null0

#start simulation
$ns at 0.5 "$cbr0 start"
$ns rtmodel-at 1.0 down $n(1) $n(2)
$ns rtmodel-at 2.0 up $n(1) $n(2)
$ns at 3.5 "$cbr0 stop"

$ns at 5.0 "finish"
$ns run