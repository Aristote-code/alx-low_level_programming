/*
 * 3-factorial.c
 * Auth: Gahima Aristote
 */

#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: If n > 0 - the factorial of n.
 *         If n < 0 - 1 to indicate an error.
 */
int factorial(int n)
{
int fact = 1;
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}

else
{
fact = n * factorial(n - 1);
return (fact);
}
}
