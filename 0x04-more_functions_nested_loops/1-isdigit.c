#include "main.h"

/**
 * main - check the code
 *
 * Return: Always
 */

int _isdigit(int c)
{
int c = 0;
for (c = 0; c <= 9; c++)
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
