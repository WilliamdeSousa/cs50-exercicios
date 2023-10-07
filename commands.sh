#!/bin/bash

run()
{
    main=$(basename "$1" | cut -d. -f1)
    gcc -c func.c
    gcc func.o $1 -lcs50 -lm -o $main.run
    ./$main.run
    rm -rf $main.run func.o
}