#include "main.h"
/**
* print_times_table - prtt
*@n: n times table  
* Return: times table
*/
void print_times_table(int n)
{
	int i, j, res, d, u, c;

	if (n > 15 || n < 0)
		_putchar(' ');
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				res = i * j;
				if (res <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + res);
				}
				else if (res <= 99)
				{
					u = res % 10;
					d = res / 10;
					_putchar(' ');
					_putchar('0' + d);
					_putchar('0' + u);
				}
				else
				{
					u = res % 10;
					d = (res / 10) - 10;
					c = res / 100;
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('0' + u);
				}
				if (j == n)
					_putchar('\n');
			}
		}
	}
}
