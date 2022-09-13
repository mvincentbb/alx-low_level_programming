#include "main.h"

/**
* print_last_digit - last digi
*
* @n: int
*
* Return: an int
*/
int print_last_digit(int n)
{
	int ld, ch;

	ld = n % 10;
	if (ld < 0)
	{
		ld = -ld;
	}
	ch = '0' + ld;
	_putchar(ch);
	return (ld);
}
