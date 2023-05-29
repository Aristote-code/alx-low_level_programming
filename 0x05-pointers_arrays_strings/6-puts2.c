/*
 * File: 6-puts2.c
 * Auth: Gahima Aristote
 */

#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
int i;
int len = 0;

while (str[len] != '\0')
{
len++;
str++;
}

for (i = 0; i < len; i=+2)
{
_putchar(str[i]);
}

_putchar('\n');

}