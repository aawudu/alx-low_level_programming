#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a function that prints its name, followed by a new line.
 * @argc: counts of argument
 * @argv: arguement vector
 * Return: prints name of programme.
 */
int main(int argc, char **argv)
{
	if (*argv[0] > 0)
	{
		printf("%i\n", argc - 1);
	}
	return (0);
}
