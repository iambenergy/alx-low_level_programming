#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string parameter of function
 */

void puts2(char *str)
{
	int length_i = 0;
	int a = 0;
	char *b = str;
	int j;

	while (*b != '\0')
	{
		length_i++;
		b++;
	}
	a = length_i - 1;

	for (j = 0; j <= a; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}

}
