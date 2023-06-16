/*
 * File: 3-array_range.c
 * Auth: Gahima Aristote
 */

#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
int i, size;
int *val;
if (max < min)
{
return (NULL);
}
size = (max - min) + 1;
val = malloc(size * sizeof(int));
if (val == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
val[i] = min++;
}
return (val);
}
