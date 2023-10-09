#!/bin/bash

comp()
{
    main=$(basename "$1" | cut -d. -f1)
    gcc -c func.c
    gcc func.o $1 -lcs50 -lm -o $main
    rm -rf func.o
}

run()
{
    comp $1
    ./$main
    rm -rf $main
}