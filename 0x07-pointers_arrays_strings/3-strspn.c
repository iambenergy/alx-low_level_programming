#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: a pointer to the string to be searched
 * @accept: the character to be searched in the string s
 * Return: Returns 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

