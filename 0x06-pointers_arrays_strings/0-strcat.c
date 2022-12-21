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
	int dlent = 0, k;

	while (dest[dlent])
	{
		dlent++;
	}

	for (k = 0; src[k] != 0; k++)
	{
		dest[dlent] = src[k];
		dlent++;
	}
	dest[dlent] = '\0';
	return (dest);
}
