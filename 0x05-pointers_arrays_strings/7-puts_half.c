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
    int n;

    while (str[index] != '\0')
    {
        len++;
        index++;
    }

    if ((len % 2) == 0)
    {
        n = len / 2;
    }
    else
    {
        n = (len + 1) / 2;
    }

    for (index = len / 2; index < len; index++)
    {
        _putchar(str[index]);
    }

    _putchar('\n');
}
