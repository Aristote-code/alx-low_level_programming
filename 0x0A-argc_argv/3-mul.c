/*
 * File: 3-mul.c
 * Auth: Gahima Aristote
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
int num1, num2, mul;

if (argc != 3)
{
printf("Error\n");
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 * num2;

printf("%d\n", mul);

return(0);
}
