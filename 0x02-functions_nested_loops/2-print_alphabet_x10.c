#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: always 0 success
 */
void print_alphabet_x10(void)
{
	int pi, co;

	co = 0;

	while (co < 10)
	{
		for (pi = 'a'; pi <= 'z'; pi++)
		{
			_putchar(pi);
		}
		co++;
		_putchar('\n');
	}
}
