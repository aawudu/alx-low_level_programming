#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 * Return: void
 */
void print_rev(char *s)
{
	int foo = 0;

	while (s[foo] != '\0')
	{
		foo++;
	}

	for (foo -= 1; foo >= 0; foo--)
	{
		_putchar(s[foo]);
	}
	_putchar('\n');
}

