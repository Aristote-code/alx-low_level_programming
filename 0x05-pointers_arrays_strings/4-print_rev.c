/*
 * File: 4-print_rev.c
 * Auth: Gahima Aristote
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int i;
int length = 0;
char stor;

while (s[length] != '\0')
{
length++;
}

for (i = 0; i < (length/2); i++)
{
stor = s[i];
s[i] = s[length-1-i];
s[length-1-i] = stor;
}
_putchar('\n');
}
