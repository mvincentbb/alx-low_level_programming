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
				if (res <= 99)
					_putchar(' ');
				if (res <= 9)
					_putchar(' ');
				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) % 10 + '0');
				}
				else if (res <= 99 && res >= 10)
				{
					_putchar((res / 10) + 0);
				}
				_putchar((res / 10) + '0');
			}
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
