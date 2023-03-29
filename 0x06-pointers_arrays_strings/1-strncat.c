#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: parameter input value
 * @src: parameter input value
 * @n: parameter input value
 *
 * Return: Returns destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen;
	int srclen;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= n; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
