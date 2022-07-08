#!/bin/bash

var=1
for i in `seq 100`
do
    var=$var:$i
done
echo $var
export var
env
