#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: a pointer to the string to be searched
 * @needle: a pointer to the string to be found in haystack
 * Return: Returns a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack, *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}

