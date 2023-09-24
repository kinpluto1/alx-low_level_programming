#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with zero
 */

void times_table(void)
{
int hori, verti, multiply;

for (hori = 0; hori <= 9; hori++)
	{
	for (verti = 0; verti <= 9; verti++)
	{
	multiply = hori * verti;
		if (verti == 0)
		{
		_putchar('0');
		}
			else
			{
			_putchar(',');
			_putchar(' ');

			}
		if (multiply < 10)
		{
		_putchar(' ');
		}
			else
			{
			_putchar((multiply / 10) + '0');
			}
	_putchar((multiply % 10) + '0');
	}
		if (verti < 9)
		{
		_putchar(',');
		_putchar(' ');
		}
	_putchar('\n');
	}
}
