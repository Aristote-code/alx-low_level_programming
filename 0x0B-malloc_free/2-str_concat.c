/*
 * File: 2-str_concat.c
 * Auth: Gahima Aristote
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer to the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
    int index, conc_index, len1 = 0, len2 = 0;
    char *concat_str;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1])
        len1++;

    while (s2[len2])
        len2++;

    concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

    if (concat_str == NULL)
        return (NULL);

    for (index = 0; index < len1; index++)
        concat_str[index] = s1[index];

    for (conc_index = 0; conc_index < len2; conc_index++, index++)
        concat_str[index] = s2[conc_index];

    concat_str[index] = '\0';

    return (concat_str);
}
