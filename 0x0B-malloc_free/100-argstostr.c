#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: int function arguments count
 * @av: char function arguments vector
 *
 * Return: Rwturns a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *ptr, *b;
	int x, y, z, val = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		b = av[x];
		y = 0;

		while (b[y++])
			val++;
		val++;
	}

	ptr = (char *)malloc((val + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (x = 0, y = 0; x < ac && y < val; x++)
	{
		b = av[x];
		z = 0;

		while (b[z])
		{
			ptr[y] = b[z];
			z++;
			y++;
		}
		ptr[y++] = '\n';
	}
	ptr[y] = '\0';

	return (ptr);
}
