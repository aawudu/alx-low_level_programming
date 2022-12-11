#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: 'print in lowercase'
 *
 * Return: Always 0 Success
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
