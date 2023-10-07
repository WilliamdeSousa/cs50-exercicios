#include <stdbool.h>
#include <stdio.h>
#include <cs50.h>
#include "func.h"

int get_positive_int(string prompt)
{
    int num;
    do
    {
        num = get_int("%s", prompt);
    } while (num <= 0);
    return num;
}

float get_positive_float(string prompt)
{
    float num;
    do
    {
        num = get_float("%s", prompt);
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

void draw_pyramid(int height, bool left, bool right)
{
    for (int i=0; i<height; i++)
    {
        if (left) 
        {
            left_line(height, i);
        }
        if (left && right)
        {
            printf(" ");
        }
        if (right)
        {
            right_line(height, i);
        }
        printf("\n");
    }
}

void left_line(int height, int line)
{
    draw_chars(' ', height-line-1);
    draw_chars('#', line + 1);
}

void right_line(int height, int line)
{
    draw_chars('#', line + 1);
    draw_chars(' ', height-line-1);
}

int calc_coins(int cash)
{
    int coins = 0;
    
    int coin_list[4] = {25, 10, 5, 1};

    for (int i=0; i<4; i++)
    {
        while (cash >= coin_list[i]) {
            coins++;
            cash -= coin_list[i];
        }
    }
    return coins;
}