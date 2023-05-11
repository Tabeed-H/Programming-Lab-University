#create a new Simulator
set ns [new Simulator]

#create a new trace file
set nf [open out.nam w]

#tell simulator to log on file
$ns namtrace-all $nf

# create an exit funtion
proc finish {} {
    global ns nf
    $ns flush-trace
    close $nf
    exec nam out.nam &
    exit 0
}

#create two nodes
set n0 [$ns node]
set n1 [$ns node]

#create links between the two nodes
$ns duplex-link $n0 $n1 1Mb 10ms DropTail

#create a traffic source and attach CBR traffic to it
set udp0 [new Agent/UDP]
$ns attach-agent $n0 $udp0

set cbr0 [new Application/Traffic/CBR]
$cbr0 set packetSize_ 500
$cbr0 set interval_ 0.005
$cbr0 attach-agent $udp0

#create a sink
set null0 [new Agent/Null]
$ns attach-agent $n1 $null0


#connect nodes
$ns connect $udp0 $null0

#start traffic
$ns at 0.5 "$cbr0 start"
#end traffic 
$ns at 3.5 "$cbr0 stop"

#end simulation
$ns at 5.0 "finish"

$ns run
