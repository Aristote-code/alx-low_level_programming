#include "main.h"

/**
*print_numbers - print 0123456789
* owned by Bwave ICT
*Return: void
*/

void print_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
_putchar(a + '0');
_putchar('\n');
return;
}
