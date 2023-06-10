/*
 * File: 1-args.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d", argc - 1);
return (0);
}
