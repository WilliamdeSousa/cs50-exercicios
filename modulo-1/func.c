#include <stdbool.h>
#include <stdio.h>
#include <cs50.h>
#include "func.h"

int get_positive(string prompt)
{
    int num;
    do
    {
        num = get_int("%s", prompt);
    } while (num <= 0);
    return num;
}

void draw_chars(char c, int repets)
{
    for (int i=0; i<repets; i++)
    {
        printf("%c", c);
    }
}

void draw_pyramid(int size, bool left, bool right)
{
    for (int i=0; i<size; i++)
    {
        if (left) 
        {
            left_line(size, i);
        }
        if (left && right)
        {
            printf(" ");
        }
        if (right)
        {
            right_line(size, i);
        }
        printf("\n");
    }
}

void left_line(int size, int line)
{
    draw_chars(' ', size-line-1);
    draw_chars('#', line + 1);
}

void right_line(int size, int line)
{
    draw_chars('#', line + 1);
    draw_chars(' ', size-line-1);
}