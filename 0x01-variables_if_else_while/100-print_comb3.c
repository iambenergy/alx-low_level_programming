#include <stdio.h>

/**
 * main - Main entry point displays all possible combinations of two digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Return 0 when successful
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
