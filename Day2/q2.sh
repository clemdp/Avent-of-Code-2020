#!/bin/bash

i=0
cat input.txt | while read ligne ; do

    #valeur de pos 1
    min=$(echo $ligne | grep -E -o "^([0-9]*)")
    max=$(echo $ligne | grep -E -o "\-([0-9]*)")
    #valeur de pos 2
    max2=$(echo $max | grep -E -o "[0-9]*")
    #selection du caractere a retrouver
    letter=$(echo $ligne | grep -E -o "[a-z]:" | tr -d ":")
    #echo "letter :" $letter
    #selection de la chaine correspondant au mot de passe
    password=$(echo $ligne | grep -E -o "([a-z]*)$")
    #test compte le nombre de lettres qui match
    test=$(echo $password | grep -E -o "[$letter]*" | tr -d "\n" | wc -c)
    
    char1=$(echo ${password:(($min-1)):1})
    char2=$(echo ${password:(($max2-1)):1})
    #echo "char 1 :" $char1
    #echo "char 2 :" $char2
    if ( ( ( [ $char1 == $letter ] ) && ( [ $char2 != $letter ] ) ) || ( ( [ $char1 != $letter ] ) && ( [ $char2 == $letter ] ) ) )
    then
        echo "letter :" $letter
        echo "char 1 :" $char1
        echo "char 2 :" $char2
        echo "min :" $min
        echo "max :" $max2
        echo $password;
        i=$(($i+1));
        echo "i:" $i
    fi
    
done

echo $i