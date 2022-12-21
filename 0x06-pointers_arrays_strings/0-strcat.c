#include "main.h"
#include <stdio.h>
/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
/* Find the end of the dest string */
	char *end = dest;

	while (*end)
	{
		end++;
	}
/* Append the src string to the end of the dest string */
	while (*src)
	{
		*end = *src;
		src++;
		end++;
	}
/* Add a terminating null byte to the end of the dest string */
	*end = '\0';
/* Return a pointer to the resulting string dest */
	return (dest);
}
