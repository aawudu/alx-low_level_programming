#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: A integer
 */
int _atoi(char *s)
{
	int so = 0;
	unsigned int ca = 0;
	int toa = 1;
	int ici = 0;

	while (s[so])
	{
		if (s[so] == 45)
		{
			toa *= -1;
		}
		while (s[so] >= 48 && s[so] <= 57)
		{
			ici = 1;
			ca = (ca * 10) + (s[so] - '0');
			so++;
		}
		if (ici == 1)
		{
			break;
		}
		so++;
	}
	ca *= toa;
	return (ca);
}
