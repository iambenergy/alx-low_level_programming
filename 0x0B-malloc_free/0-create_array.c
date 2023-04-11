#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of the array in function input
 * @c: char variable in function input
 * Return: Returns pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{

	char *ptr;
	unsigned int x;

	ptr = malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		ptr[x] = c;
	return (ptr);
}

