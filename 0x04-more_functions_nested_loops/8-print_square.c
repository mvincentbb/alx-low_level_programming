#include "main.h"

/**
 * print_square - ps
 *
 * @size: integer
 *
 * Return: square
 */

void  print_square(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; i < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
