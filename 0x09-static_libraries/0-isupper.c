
#include "main.h"

/**
 * _isupper - Program to check for uppercase letters
 * @c: parameter in the function
 *
 * Return: Return 0 if no uppercase letters and 1 if uppercase letters present
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

