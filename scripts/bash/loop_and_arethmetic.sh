#!/bin/sh

a=0

while [ $a -lt 100 ]
do
    let a=a+1

    if [ $a -eq 50 ]; then
        echo half passed.
    else
        let b=b+1
    fi

    echo repeated $a
done
