#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: parameter input value
 * @src: parameter input value
 *
 * Return: Returns destination
 */

char *_strcat(char *dest, char *src)
{
	int destlen;
	int srclen;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
