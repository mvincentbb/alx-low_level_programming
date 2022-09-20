#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: the string to be printed.
 */
void print_rev(char *s)
{
	int ln = 0, index;

	while (s[index++])
		ln++;

	for (index = ln - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
