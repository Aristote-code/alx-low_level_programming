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
	int length = 0;
    int i;
    char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= length / 2; i--)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}

	_putchar('\n');
}
