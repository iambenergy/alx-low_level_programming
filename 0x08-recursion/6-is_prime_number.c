#include "main.h"

/**
 * test - tests for prime number
 * @x: integer to be passed into function
 * @y: integer to be passed into function
 *
 * Return: Returns tested prime number
 */

int test(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	return (test(x + 1, y));
}

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: integer to be passed into function
 *
 * Return: Returns 1 if prime number exists , 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (test(2, n));
}
