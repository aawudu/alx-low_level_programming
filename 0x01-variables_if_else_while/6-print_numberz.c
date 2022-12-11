#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'print 0-9 and putchar 2x'
 *
 * Return: Always 0 success
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
