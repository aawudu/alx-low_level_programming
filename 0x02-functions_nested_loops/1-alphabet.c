#include "main.h"
/**
 * print_alphabet - Entry point for printing alphabet
 *
 * Return: always 0 success
 */
void print_alphabet(void)
{
	int p;

	for (p = 'a'; p <= 'z'; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}
