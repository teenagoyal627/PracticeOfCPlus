#!/bin/bash
FILE=a.out
if test -f "$FILE"; then
    echo "$FILE removed!"
    rm $FILE
fi
PROG_NAME=$1
echo $PROG_NAME
output=$(g++ $PROG_NAME)  #redirect the error to a variable
echo $output              #show the error on stdout
if test -f "$FILE"; then
    echo "$FILE exist"
    ./$FILE
fi
