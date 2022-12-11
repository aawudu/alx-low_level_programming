#include <stdio.h>
/**
 * main - entry point
 *
 * Description: 'print from 00 to 99'
 *
 * Return: always 0 success
 */
int main(void)
{
	int foo = '0';
	int chess = '0';

	while (foo <= '9')
	{
		while (chess <= '9')
		{
			if (!(foo > chess || foo == chess))
			{
				putchar(foo);
				putchar(chess);
				if (foo == '8' && chess == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			chess++;
		}
		chess = '0';
		foo++;
	}
	return (0);
}
