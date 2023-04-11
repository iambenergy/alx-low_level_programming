#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: pointer to char array for first string argument
 * @s2: pointer to char array for second string argument
 *
 * Return: Returns pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, val1, val2, val;
	char *outcome;

	val1 = val2 = 0;

	if (s1 != NULL)
	{
		x = 0;
		while (s1[x++] != '\0')
			val1++;
	}
	if (s2 != NULL)
	{
		x = 0;
		while (s2[x++] != '\0')
			val2++;
	}

	val = val1 + val2;
	outcome = (char *)malloc((val + 1) * sizeof(char));
	if (outcome == NULL)
		return (NULL);
	for (x = 0; x < val1; x++)
		outcome[x] = s1[x];
	for (y = 0; y < val2; y++, x++)
		outcome[x] = s2[y];
	outcome[val] = '\0';
	return (outcome);
}
