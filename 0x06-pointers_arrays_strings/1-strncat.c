#include "stdio.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int des_len = 0, i = 0;

while (dest[des_len] != '\0')

{
des_len++;
}

while (i < n && src[i] != '\0')

{
dest[des_len + i] = src[i];
i++;
}

dest[des_len + 1] = '\0';

printf("%s", dest);

return (dest);
}

