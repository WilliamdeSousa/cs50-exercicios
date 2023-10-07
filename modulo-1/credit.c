#include <stdbool.h>
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int get_size(long number);
int get_digit(long number, int pos);
int get_digits(long number, int pos, int size);
int check_sum(long number);

int main(void)
{
    long number = get_long("Number: ");
    int n_digits = get_size(number);

    int first_digits = get_digits(number, n_digits, 2);
    
    if (check_sum(number) == 20)
    {
        if (n_digits == 15 && (first_digits == 34 || first_digits == 37))
        {
            printf("AMEX\n");
        } 
        else if (n_digits == 16 && (first_digits == 51 || first_digits == 52 || first_digits == 53 || first_digits == 54 || first_digits == 55))
        {
            printf("MASTERCARD\n");
        } 
        else if ((n_digits == 16 || n_digits == 13) && (int) (first_digits / 10) == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

int get_size(long  number)
{
    int count=1;
    while (number >= 10)
    {
        count++;
        number /= 10;
    }
    return count;
}

int get_digit(long number, int pos)
{
    return get_digits(number, pos, 1);
}

int get_digits(long number, int pos, int size)
{
    return (long) (number / pow(10, pos - size)) % (int) pow(10, size);
}

int check_sum(long number) 
{
    int size = get_size(number);
    int soma = 0;
    for (int i=0; i<size; i++)
    {
        if ((i + 1) % 2 == 0) 
        {
            int num = get_digit(number, i+1) * 2;
            soma += get_digit(num, 1) + get_digit(num, 2);
        }
        else
        {
            int num = get_digit(number, i+1);
            soma += num;
        }
    }
    return soma;
}