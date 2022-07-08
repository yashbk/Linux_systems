#!/bin/bash

if [ -x $1 ]
then
    echo "$1 is executable"
else
    echo "It is not executable"
fi
