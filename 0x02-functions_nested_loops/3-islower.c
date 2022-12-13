#include "main.h"
/**
 * _islower - this function checks lowercase charater
 *
 * @c: a letter input
 *
 * Return: 1 when c is lowercase or else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

