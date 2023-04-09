#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: number count of arguments
 * @argv: argument vector or character array of arguments
 *
 * Return: Returns 0  if Successful
 */

int main(int argc, char *argv[])
{
	(void) argv; /* Void ignores theargv*/
	printf("%d\n", argc - 1);

	return (0);
}

