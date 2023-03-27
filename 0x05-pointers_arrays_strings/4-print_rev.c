#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: string parameter passed into the function
 */

void print_rev(char *s)
{
	int length_i = 0;
	int j;

	while (*s != '\0')
	{
		length_i++;
		s++;
	}
	s--;

	for (j = length_i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
