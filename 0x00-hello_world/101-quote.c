#include <stdio.h>
#include <unistd.h>

/**
 * main - This is where my program is written
 *
 * Return 1 to indicate failed execution
 *
 */

int main(void)
{
	write(2, 
		"\"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
