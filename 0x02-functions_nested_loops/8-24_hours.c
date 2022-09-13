#include "main.h"
/**
* jack_bauer - jac
*
* Return: Always 0
*/
void jack_bauer(void)
{
	int min, h, i, j, k, l;

	for (h = 0; h <= 24; h++)
	{
		i = h / 10;
		j = h % 10;
		for (min = 0; min < 60; min++)
		{
			k = m / 10;
			l = m % 10;
			_putchar('0' + i);
			_putchar('0' + j);
			_putchar(':')
			_putchar('0' + k);
			_putchar('0' + l);
			_putchar('\n');
		}
	}
}
