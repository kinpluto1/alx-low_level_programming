#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *
 * @kp: number to check last digit
 *
 * Return: the last digit
 */

int print_last_digit(int kp)
{
int last_digit = kp % 10;

if (last_digit < 0)
	{
	last_digit = last_digit * -1;
	}
_putchar('0' + last_digit);
return (last_digit);
}
