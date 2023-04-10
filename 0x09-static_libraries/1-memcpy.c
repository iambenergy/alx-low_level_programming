#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: char pointer parameter memory destination
 *@src: char pointer parameterimemory where is copied
 *@n: unsigned interger parameter of number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

