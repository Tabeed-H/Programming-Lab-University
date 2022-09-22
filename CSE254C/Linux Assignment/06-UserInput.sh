#!/bin/bash
echo "Enter Age"
read Age
if [ $Age -le 18 ]
then
echo "You are NOT Adult"
else
echo "You are Adult"
fi


read -p "Press Any Key To Continue"