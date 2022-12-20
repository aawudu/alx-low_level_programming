#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */
void rev_string(char *s)
{
	int i, c, e;
	char *a, aut;

	a = s;
	while (s[c] != '\0')
	{
		c++;
	}
	for (e = 1; e < c; e++)
	{
		a++;
	}
	for (i = 0; i < (c / 2); i++)
	{
		aut = s[i];
		s[i] = *a;
		*a = aut;
		a--;
	}
}
