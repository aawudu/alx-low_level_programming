#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: the board to print
 */
void print_chessboard(char(*a)[8])
{
	int bee;
	int cee;
	for (bee = 0; bee < 8; bee++)
	{
		for (cee = 0; cee < 8; cee++)
			_putchar(a[bee][cee]);
		_putchar('\n');
	}
}
