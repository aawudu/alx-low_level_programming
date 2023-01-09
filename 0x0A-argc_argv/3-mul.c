#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function that prints the product of two inputs.
 * @argc: argument count
 * @argv: argument vector
 * Return: returns the product of two numbers
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
