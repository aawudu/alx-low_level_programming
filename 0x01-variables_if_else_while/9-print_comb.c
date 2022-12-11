#include <stdio.h>
/**
 * main - print possible combinations for single digit numbers'
 *
 * Return: always 0 succes
 */
int main(void)
{
	int tee = '0';

	while (tee <= '9')
	{
		putchar(tee);
		if (tee != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++tee;
	}
	putchar('\n');
	return (0);
}
