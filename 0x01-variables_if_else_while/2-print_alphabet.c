#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
