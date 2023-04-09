#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: number count of arguments
 * @argv: argument vector or character array of arguments
 *
 * Return: Returns 0  if Successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

