#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'print alphabet in reverse'
 *
 * Return: Always 0 success
 */
int main(void)
{
	char chess = 'z';

	while (chess >= 'a')
	{
		putchar(chess);
		chess--;
	}
	putchar('\n');
	return (0);
}
