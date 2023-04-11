#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter.
 * @str: Pointer to char array argument in the function
 *
 * Return: Returns NULL if str = NULL, or a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;

	int x, y = 0;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		i++;
	ptr = malloc((x + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (y = 0; str[y]; y++)
		ptr[y] = str[y];
	return (ptr);
}

