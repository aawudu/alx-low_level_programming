#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */
void rev_string(char *s)
{
	int ice;

	while (s[ice] != '\0')
	{
		ice++;
	}
	for (ice = ice - 1; ice >= 0; ice--)
	{
		_putchar(s[ice]);
	}
	_putchar('\n');
}
