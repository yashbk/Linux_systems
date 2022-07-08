#!/bin/bash

read -p "Enter total volume of sub: " volume
read -p "Enter total weight of sub: " weight

buoyancy_point=$((volume-weight))

echo "Volume of sub is:------------------------------------------------> $volume ccm"

echo "Weight of the sub is:--------------------------------------------> $weight kg"

echo -n "Density of the sub is:-------------------------------------------> ";echo "scale=3;$weight/$volume"|bc

echo "Ballast volume is:-----------------------------------------------> 1280 ccm"

echo "Water to be filled to achieve buoyancy is:-----------------------> $buoyancy_point ccm"

echo -n "Amount of water that can be filled after achieving buoyancy is:--> ";echo -n  $((1280-buoyancy_point));echo " ccm"
