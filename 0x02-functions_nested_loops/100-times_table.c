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
	else
	{
		for (i = 0; i <= n; i++)
		{
			putchar('0');
			for (j = 1; j <= n; j++)
			{
				putchar(',');
				putchar(' ');
				res = i * j;
				if (res <= 9)
				{
					putchar(' ');
					putchar(' ');
					putchar('0' + res);
				}
				else if (res <= 99)
				{
					u = res % 10;
					d = res / 10;
					putchar(' ');
					putchar('0' + d);
					putchar('0' + u);
				}
				else
				{
					u = res % 10;
					d = (res / 10) - 10;
					c = res / 100;
					putchar('0' + c);
					putchar('0' + d);
					putchar('0' + u);
				}
				if (j == n)
					putchar('\n');
			}
		}
	}
}
