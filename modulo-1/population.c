#include <stdio.h>
#include <cs50.h>
#include "func.h"

int main(void)
{
    int start_size = get_positive_int("Start size: ");
    int end_size = get_positive_int("End size: ");
    int years = 0;

    while (start_size < end_size)
    {
        int growth = start_size / 3;
        int death = start_size / 4;
        start_size += (growth - death);
        years++;
    }

    printf("Years: %d\n", years);
}