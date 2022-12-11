#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Prints in lower and upper case'
 *
 * Return: Always 0 Success
 */
int main(void)
{
	char low = 'a';
	char upp = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	while (upp <= 'Z')
	{
		putchar(upp);
		upp++;
	}
	putchar('\n');
	return (0);
}
