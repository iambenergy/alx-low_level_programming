#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: strinf parameter
 *
 * Return: Returns integer value
 */
int _atoi(char *s)
{
	int x = 0;
	int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			min *= -1;
		}

		while (s[x] >= 48 && s[x] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[x] - '0');
			x++;
		}

		if (isi == 1)
		{
			break;
		}

		x++;
	}

	ni *= min;
	return (ni);
}
Footer
© 2023 G
