
#!/bin/bash


if [ $# -ne 0 ]
then
    head -$1 $3 | tail -$2
else
    echo "Pass arguments"
fi

