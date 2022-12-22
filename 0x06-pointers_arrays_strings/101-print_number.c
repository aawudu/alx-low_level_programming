#include "main.h"
/**
  * print_number - prints number with _putchar
  * @n: input number
  * Return: no return
 **/
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	x = n;
	if (x / 10)
		print_number(x / 10);
	_putchar(x % 10 + '0');
}
