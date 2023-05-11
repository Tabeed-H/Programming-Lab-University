#create new simulator
set ns [new Simulator]

#create a trace file
set nf [open out.nam w]

#tell simulator to write logs on file
$ns namtrace-all $nf

#exit function
proc function {} {
    global ns nf
    $ns flush-trace
    close $nf
    exec nam out.nam &
    exit 0
}

#create nodes
set n0 [$ns node]
set n1 [$ns node]
set n2 [$ns node]
set n3 [$ns node]

#create links between nodes
$ns duplex-link $n0 $n2 1Mb 10ms DropTail
$ns duplex-link $n1 $n2 1Mb 10ms DropTail
$ns duplex-link $n2 $n3 1Mb 10ms DropTail

#orientation of links
$ns duplex-link-op $n0 $n2 orient right-down
$ns duplex-link-op $n1 $n2 orient right-up
$ns duplex-link-op $n2 $n3 orient right

#keep track of the queue
$ns duplex-link-op $n2 $n3 queuePos 0.5

#create traffic at n0 n1
set upd0 [new Agent/UDP]
$ns attach-agent $n0 $upd0

set cbr0 [new Application/Traffic/CBR]
$cbr0 set packetSize_ 500
$cbr0 set interval_ 0.005
$cbr0 attach-agent $upd0

set upd1 [new Agent/UDP]
$ns attach-agent $n1 $upd1


set cbr1 [new Application/Traffic/CBR]
$cbr1 set packetSize_ 500
$cbr1 set interval_ 0.005
$cbr1 attach-agent $upd1


#create a sink at n3
set null0 [new Agent/Null]
$ns attach-agent $n3 $null0

#connect nodes
$ns connect $udp0 $null0
$ns connect $udp1 $null0


#start traffic
$ns at 0.5 "$cbr0 start"
$ns at 1.5 "$cbr1 start"
$ns at 2.5 "$cbr0 stop"

$ns at 5.0 "finish"

$ns run

