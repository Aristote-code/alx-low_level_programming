/*
 * File: 8-print_array.c
 * Auth: Brennan D Baraban
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an inputted number of elements
 *               of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
int index;

for (index = 0; index < n; index++)
{
if (index != (n-1))
{
printf("%d, ", a[index]);
}

else
{
printf("%d", a[index]);   
}
}
printf("\n");
}
