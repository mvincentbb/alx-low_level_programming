#include "main.h"

/**
 * print_line - pl
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < 2; i++)
		{
			_putchar('_');
		}
		_puchar('\n');
	}
}
