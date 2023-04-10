#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer parameter passed into the function
 * @b: char parameter passed into the function
 * @n: unsigned int parameter passed into the function
 * Return: Returns (s) if successful.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
