#!/bin/bash

#PATH=$PATH:/usr/bin/sed
#export PATH

#:test
#echo test

while read line; do
    for word in $line; do
        echo "word = '$word'"
    done
done < text.txt