#include <stdio.h>
#include "main.h"
/*
 * _puts_recursion - Prints string, and a new  line.
 *
 * Description: 'Function prints string and a new line.'
 *
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
