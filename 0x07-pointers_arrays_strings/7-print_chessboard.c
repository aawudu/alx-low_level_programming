#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: the board to print
 * Return: always 0 success
 */
void print_chessboard(char (*a)[8])
{
	int bee, cee;

	for (bee = 0; bee < 8; bee++)
	{
		for (cee = 0; cee < 8; cee++)
			_putchar(a[bee][cee]);
		_putchar('\n');
	}
}
