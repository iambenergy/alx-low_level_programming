#include "main.h"

/**
 * _isdigit - Program is a function to check if numbers are 0 - 9
 * @c: parameter to be checked
 *
 * Return: Always 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

