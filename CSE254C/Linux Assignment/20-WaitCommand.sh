#!/bin/bash
echo "Wait command" &
process_id=$!
wait $process_id
echo "Exited with status $?"

read -p "Press Any Key To Continue"