#!/bin/bash

string1="Hello"
string2="world"
echo "$string1$string2"
string3=$string1+$string2
string3+=" to the world"
echo $string3

read -p "Press Any Key To Continue"
