#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - print power of ta number
 * @x: base number
 * @y: exponential
 * Return: the power of a number
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
