/*
 * File: 1-strncat.c
 * Auth: Gahima Aritote
 */

#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int src_len = 0;
int index = 0;

while (dest[dest_len] != '\0')
{
dest_len++;
}

while (src[src_len] != '\0')
{
src_len++;
}

for (index = 0; index < n && (src[index] != '\0'); index++)
{
dest[dest_len++] = src[index];
}
dest[dest_len] = '\0';
return (dest);
}
