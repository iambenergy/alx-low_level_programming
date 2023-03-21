#include "main.h"

/**
 * print_alphabet - To write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: Return always 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
