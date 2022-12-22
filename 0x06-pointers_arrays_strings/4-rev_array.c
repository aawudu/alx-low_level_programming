#include "main.h"
/**
  * reverse_array - reverses the content of an array of integers
  * @n: size
  * @a: input array
  * Return: no return
 **/
void reverse_array(int *a, int n)
{
	int aut = 0, i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n - i - 1); j++)
		{
			aut = a[j + 1];
			a[j + 1] = a[j];
			a[j] = aut;
		}
	}
}
