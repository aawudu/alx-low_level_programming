#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print diagonal sum.
 * @a: an array of pointers of integers
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, p1, p2;

	k = 0;
	p1 = 0;
	p2 = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			(i == j) ? p1 += a[k] : 0;
			(i + j == size - 1) ? p2 += a[k] : 0;
			k++;
		}
	printf("%i, %i\n", p1, p2);
}
