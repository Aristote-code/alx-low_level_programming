/*
 * File: 2-strlen_recursion.c
 * Auth: Gahima Aristote
 */

#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
int length = 0;
if (*s != '\0')
{
length++;
length = 1 + _strlen_recursion(s + 1);
}
return (length);
}
