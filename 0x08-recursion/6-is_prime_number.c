#include <stdio.h>
#include "main.h"
/**
 * prime - look for multipliers of n.
 * @n: base number.
 * @p: iterator number.
 * Return: 1 if n is prime, 0 otherwise.
 */
int prime(int n, int p)
{
	if (p == n)
		return (1);
	if (n % p == 0)
		return (0);
	else
		return (prime(n, p + 1));
}
/**
 * is_prime_number - check if n is prime
 * @n: base number.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime(n, 2));
}
