#!/bin/bash

run()
{
    gcc -c func.c
    gcc func.o $1 -lcs50 -lm -o $1.run
    ./$1.run
    rm -rf $1.run func.o
}