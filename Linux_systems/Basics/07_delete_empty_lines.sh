<<comments
Name: Yashas B K
Date: 26/10/21
Description: Script to delete empty lines from a file
Input: ./07_delete_empty_lines.sh file.txt
Output: Empty lines are deleted
comments

#!/bin/bash

if [ -s $1 ]
then
   # cat $1
   # sed -i '/^$/d' $1|sed -i '/[[:space:]]/d' Did not work : it showed error
    sed -i '/[[:space:]]/d' $1
    sed -i '/^$/d' $1
   # cat $1
    echo "Empty lines are deleted."
else
    echo "Error : $1 is empty, So cannot delete the empty lines."
fi

