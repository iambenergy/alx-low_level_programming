#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: Returns length
 */

int _strlen(char *s)
{

	int length_i = 0;

	while (*s != '\0')
	{
		length_i++;
		s++;
	}
	return (length_i);
}
