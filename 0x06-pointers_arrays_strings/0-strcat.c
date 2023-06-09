/*
 * File: 0-strcat.c
 * Auth: Gahima Aristote
 */

#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
int len1 = 0;
int len2 = 0;
int index = 0;

while (src[len2] != '\0')
{
len2++;
}

while (dest[len1] != '\0')
{
len1++;
}

for (index = 0; index < len2; index++)
{
dest[len1 + index] = src[index];
}

dest[len1 + len2] = '\0';

return (dest);

}
