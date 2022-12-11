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
	int so = '0';
	int ca = '0';
	int toa = '0';

	while (so <= '7')
	{
		while (ca <= '8')
		{
			while (toa <= '9')
			{
				if (so < ca && ca < toa)
				{
					putchar(so);
					putchar(ca);
					putchar(toa);
					if (!(so == '7' && ca == '8' && toa == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			toa++;
		}
		toa = '0';
		ca++;
	}
	ca = '0';
	so++;
	}
	putchar('\n');
	return (0);
}
