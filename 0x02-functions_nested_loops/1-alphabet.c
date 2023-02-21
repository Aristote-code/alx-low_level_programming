#include <stdio.h>

/**
 * prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
char letter;
for (letter = "a", letter <= "z", letter++)
printf(letter);
printf("\n");

return (0);
}

