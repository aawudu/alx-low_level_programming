#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: the board to print
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = j = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			printf("%d", a[i][j]);
			j++;
		}
		printf("%d\n");
		i++;
	}
}
