#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: Pointer to the string character argument
 * Return: Returns the length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length = length +  _strlen_recursion(s + 1);
	}
	return (length);
}

