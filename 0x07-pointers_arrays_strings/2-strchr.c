#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: a pointer to the string to be searched
 * @c: the character to be searched in the string s
 * Return: Return 0 when Successful
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

