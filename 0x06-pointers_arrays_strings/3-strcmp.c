#include "holberton.h"
/**
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
	int ai = 0, bi = 0, ci = 0, ri = 0, lit;

	while (s1[ai])
	{
		ai++;
	}
	while (s2[bi])
	{
		bi++;
	}
	if (ai <= bi)
	{
		lit = ai;
	}
	else
	{
		lit = bi;
	}
	while (ci <= lit)
	{
		if (s1[ci] == s2[ci])
		{
			ci++;
			continue;
		}
		else
		{
			r = s1[ci] - s2[ci];
			break;
		}
		ci++;
	}
	return (ri);
}
