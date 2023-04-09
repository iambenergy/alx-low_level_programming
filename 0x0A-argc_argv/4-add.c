#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: number count of arguments
 * @argv: argument vector or character array of arguments
 *
 * Return: Returns 0  if Successful
 */

int main(int argc, char **argv)
{
	int x, num, total;
	char *var;

	total = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; argv[x]; x++)
	{
		num = strtol(argv[x], &var, 10);
		if (*var)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			total += num;
		}
	}
	printf("%d\n", total);

	return (0);
}

