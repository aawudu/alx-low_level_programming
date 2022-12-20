#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int ice = 0;
	int cold;

	while (s[ice] != '\0')
	{
		ice++;
	}
	for (cold = 0; cold < ice; cold++)
	{
		ice--;
		rev = s[cold];
		s[cold] = s[ice];
		s[ice] = rev;
	}
}
