#include "main.h"

/**
 * test - tests for square root
 * @x: integer passed into the function
 * @y: integer passed into the function
 *
 * Return: Returns the tested square root value
 */

int test(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	return (test(y, x + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural square root of a num
 * @n: integer passed into the function
 *
 * Return: Returns square root of n or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (test(1, n));
}
