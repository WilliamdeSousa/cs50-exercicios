#include <stdbool.h>
#include <stdio.h>
#include <cs50.h>
#include "func.h"

int main(void)
{
    int size = get_positive("size: ");

    draw_pyramid(size, true, true);
}