#include<stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
    int number;

    for (number = 0; number < 10; number++)
    {
        putchar((number % 10) + '0');
        putchar(',');
        putchar(' ');
    }
    putchar('\n');
    return (0);
}
