#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Always 0.
 */

int main(void)
{
int number1;
int number2;

for (number1 = 0; number1 < 10; number1++)
{
for (number2 = 0; number2 < 10; number2++)
{
if (number1 < number2)
{
putchar((number1 % 10) + '0');
putchar((number2 % 10) + '0');
if (number1 == 8 && number2 == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
