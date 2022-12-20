#include "main.h"
/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int sarg;

	for (sarg = 0; src[sarg] != '\0'; sarg++)
	{
		dest[sarg] = src[sarg];
	}
	dest[sarg++] = '\0';
	return (dest);
}
