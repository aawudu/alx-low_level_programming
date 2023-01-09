#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints a program that takes a number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: number of arguments inputed
 */
int main(int argc, char **argv)
{
	int koko = 0;

	for (; koko < argc; koko++)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
