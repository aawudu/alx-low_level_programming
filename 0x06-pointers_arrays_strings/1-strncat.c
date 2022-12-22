#include "main.h"
/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int d_lent = 0, p = 0;

	while (dest[d_lent])
	{
		d_lent++;
	}
	while (p < n && src[p])
	{
		dest[d_lent] = src[p];
		d_lent++;
		p++;
	}
	dest[d_lent + n + 1] = '\0';
	return (dest);
}
