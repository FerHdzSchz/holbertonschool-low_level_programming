#!/bin/bash

for fname in ./*c
do
    gcc -c "$fname"
done

ar rc liball.a *.o
ranlib liball.a
