#include "main.h"

/**
 * print_diagonal - pd
 *
 * @n: integer
 *
 * Return: diagonal.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
	}
}
