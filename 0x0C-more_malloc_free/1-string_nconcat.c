/*
 * File: 1-string_nconcat.c
 * Auth: Gahima Aristote
 */

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int index, len = 0, len2 = 0;
char *concat;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len] != '\0')
{
len++;
}
while (s2[len2] != '\0' && len2 < n)
{
len2++;
}
concat = malloc(sizeof(char) * (len + len2 + 1));
if (concat == NULL)
{
return (NULL);
}
for (index = 0; index < len; index++)
{
concat[index] = s1[index];
}
for (index = 0; index < len2; index++)
{
concat[index + len] = s2[index];
}
concat[len + len2] = '\0';
return (concat);
}
