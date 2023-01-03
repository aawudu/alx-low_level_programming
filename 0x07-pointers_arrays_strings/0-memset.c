#include <stdio.h>
#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: the constant to print
 *
 * Return: fills memory with a constant byte.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int p = 0;

	for (; n > 0; p++)
	{
		s[p] = b;
		n--;
	}
	return (s);
}
