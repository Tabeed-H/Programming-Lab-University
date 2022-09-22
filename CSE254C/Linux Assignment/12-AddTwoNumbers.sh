#!/bin/bash
echo "Enter Number 1"
read x
echo "Enter Number 2"
read y

(( sum=$x+$y))

echo "$sum"

read -p "Press Any Key To Continue"