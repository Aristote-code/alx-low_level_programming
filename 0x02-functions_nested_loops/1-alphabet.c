#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char letter;
int num;
for (num = 0; num <= 10; num++)
{
for (letter = "a"; letter <= "z"; letter++)
{
putchar(letter);
}
putchar('\n');
}
return (0);
}
