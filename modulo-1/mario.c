#include <stdbool.h>
#include <stdio.h>
#include <cs50.h>
#include "func.h"

int main(void) {
    int height = get_positive_int("Height: ");
    
    draw_pyramid(height, true, false);
}