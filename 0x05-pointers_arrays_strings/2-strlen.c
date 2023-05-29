/*
 * File: 2-strlen.c
 * Auth: Gahima Aristote
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */

int _strlen(char *s)
{
int count = 0;
int i = 0;

while(s[i] != '\0')
{
count++;
i++;
}

return (count);
}
