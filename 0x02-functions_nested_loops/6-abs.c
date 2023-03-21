#include "main.h"

/**
 * _abs - Function code that computes the absolute value of an integer
 * @b: Parameter for function
 * Return: Always b
 */

int _abs(int b)
{
	if (b < 0)
		b = -(b);
	else if (b > 0)
		b = b;
	return (b);
}
