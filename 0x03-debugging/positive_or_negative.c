#include "main.h"

/**
 * positive_or_negative - checks for positive or negative numbers
 *
 * @i: parameter to check for number
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
