#include <stdio.h>
#include "main.h"
/**
 * _strchr- a function that locates a character in a string.
 * @s: a string
 * @c: character in the string
 * Return: Returns a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
