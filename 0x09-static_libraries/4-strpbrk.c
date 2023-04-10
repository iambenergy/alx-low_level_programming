#include "main.h"
/**
 * _strpbrk - a function that gets the length of a prefix substring.
 * @s: a pointer to the string to be searched
 * @accept: a pointer to the string containing the characters to search for
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}

