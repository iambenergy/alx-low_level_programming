/**
 * _strcpy - function that copies the string pointed to by src to dest
 * @dest: char pointer parameter
 * @src: char pointer parameter
 * Return: Return dest if successful
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}
