/*
 * File: 0-whatsmyname.c
 * Auth: Gahima Aristote
 */

#include <stdio.h>
#include "main.h"

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
