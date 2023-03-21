#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: Retun 0 when successful
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
