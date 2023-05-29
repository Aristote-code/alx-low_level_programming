/*
 * File: 7-puts_half.c
 * Auth: Gahima Aristote
 */

#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
    int index = 0;
	int len = 0;

	while (str[index] != '\0')
	{
		len++;
        index++;
	}

    for (index = ((len - 1)/2); index < len; index++)
    {
        _putchar(str[index]);
    }

    _putchar('\n');
}
