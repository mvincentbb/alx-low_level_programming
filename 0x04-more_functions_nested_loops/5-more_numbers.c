#include "main.h"

/**
* more_numbers - more
*
* Return: 0
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}
