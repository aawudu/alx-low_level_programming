#include <stdio.h>
#include "main.h"
/**
 * factorial - prints factorial of number
 * @n: number inputed
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
