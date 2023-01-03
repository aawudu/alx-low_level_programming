#include <stdio.h>
#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: initial segment
 * @accept: second segment
 * Return: return number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, val, chec;

	val = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		chec = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				val++;
				chec = 1;
			}
		}
		if (chec == 0)
			return (val);
	}
	return (val);
}
