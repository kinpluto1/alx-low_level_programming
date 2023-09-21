#include "main.h"

/**
 * main - Entry Point.
 *
 * print_alphabet: print all alphabet in lowercase.
 *
 * Return: Always 0
 */

void print_alphabet(void)
/* print_alphabet: print all alphabet in lowercase. */
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
_putchar('\n');
}
}

int main(void)
{
print_alphabet();
return (0);
}
