#include "main.h"
/**
 * _isdigit - checks 0-9 digit
 * @c: input
 * Return: 1 if input is digit, else 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

