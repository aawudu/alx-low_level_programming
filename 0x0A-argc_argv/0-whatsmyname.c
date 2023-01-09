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
	if (argc > 0)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
