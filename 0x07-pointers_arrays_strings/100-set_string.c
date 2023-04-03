#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: a pointer to pointer to a pointer of type char.
 * @to: a pointer to a char value.
 */

void set_string(char **s, char *to)
{
	*s = to;
}

