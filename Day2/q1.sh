#!/bin/bash

i=0
cat input.txt | while read ligne ; do

    min=$(echo $ligne | grep -E -o "^([0-9]*)")
    max=$(echo $ligne | grep -E -o "\-([0-9]*)")
    max2=$(echo $max | grep -E -o "[0-9]*")
    letter=$(echo $ligne | grep -E -o [a-z]:)
    password=$(echo $ligne | grep -E -o "([a-z]*)$")

    test=$(echo $password | grep -E -o "[$letter]*" | tr -d "\n" | wc -c)
    
    if ( [ $test -ge $min ] && [ $test -le $max2 ] )
    then
        echo $password;
        i=$(($i+1));
        echo "i:" $i
    fi
    
done

echo $i