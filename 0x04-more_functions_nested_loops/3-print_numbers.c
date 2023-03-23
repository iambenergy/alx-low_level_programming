#include "main.h"

/**
 * print_numbers - Function to print out num 0 - 9 with a new line
 * return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

