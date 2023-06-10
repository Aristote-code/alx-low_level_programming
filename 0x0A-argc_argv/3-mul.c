#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two integer command-line arguments.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int num1, num2, mul;

    if (argc != 3)
    {
        printf("Error\n");
        return 1;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    mul = num1 * num2;

    printf("%d\n", mul);

    return 0;
}
