#include <stdio.h>
/**
 * main - entry point
 *
 * Description: 'print numbers in base 16'
 *
 * Return: always 0 success
 */
int main(void)
{
	int foo = '0';

	while (foo <= '9')
	{
		putchar(foo);
		foo++;
	}
	foo = 'a';
	while (foo <= 'f')
	{
		putchar(foo);
		foo++;
	}
	putchar('\n');
	return (0);
}
