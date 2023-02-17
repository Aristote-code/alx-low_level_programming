#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
<<<<<<< HEAD
    int n;
    int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
    printf("Last digit of %d is %d", n, x);
    if (x > 5)
        printf("and is greater than 5");
    if (x == 0)
        printf("and is 0");
    if (x < 6 && x != 0)
        printf("and is less than 6 and not 0");
    printf("\n");
	return (0);
=======
int n;
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
printf("Last digit of %d is %d", n, x);
if (x > 5)
printf(" and is greater than 5");
if (x == 0)
printf(" and is 0");
if (x < 6 && x != 0)
printf(" and is less than 6 and not 0");
printf("\n");
return (0);
>>>>>>> aae1448997fba854a75a7c86dc7fc83136c93d0a
}
