#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y
 * @x: integer input passed into the function
 * @y: Second integer input passed into the function
 *
 * Return: Returns the result of the recursive function
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

