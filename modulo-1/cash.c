#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include "func.h"

int main(void)
{
    int cash = round(get_positive_float("Change owed: ") * 100);
    
    int coins = calc_coins(cash);
    printf("%d\n", coins);
}