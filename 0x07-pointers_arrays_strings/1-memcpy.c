#include <stdio.h>
#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: second memory area
 * @src: first memory area
 * @n: number of bytes
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int op = 0;

	for (; op < n; op++)
	{
		dest[op] = src[op];
	}
	return (dest);
}
