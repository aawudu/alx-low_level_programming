#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints alphabets except q and e'
 *
 * Return: Always 0 success
 */
int main(void)
{
	char cst = 'a';

	while (cst <= 'z')
	{
		if (cst != 'q' && cst 1= 'e')
		{
			putchar(cst);
		}
		cst++;
	}
	putchar('\n');
	return (0);
}
