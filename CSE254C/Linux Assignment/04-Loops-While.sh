#!/bin/bash
x=1
while [ $x -le 5 ]
do
echo "Hello World"
x=$((x + 1))
done

read -p "Press Any Key To Continue"