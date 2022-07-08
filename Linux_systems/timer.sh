#!/bin/bash

time=5000000
prescale=1
quantum=200

read -p "Enter the time in nano seconds	" time
read -p "Enter the resolution of the timer " resolution

denom=$((prescale*quantum*resolution))
echo "scale=3;$time/$denom"|bc
