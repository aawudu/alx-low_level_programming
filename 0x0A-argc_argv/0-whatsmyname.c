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
	int koko = 0;

	for (; koko < argc; koko++)
	{
		printf("argv[%d] = %s\n", koko, argv[koko]);
	}
	return (0);
}
