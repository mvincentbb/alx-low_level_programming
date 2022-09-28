#include "main.h"
/**
* _puts_recursion - function that prints a string,
*
* @s: char
*Return: Always 0.
*/
void _puts_recursion(char *s)
{
	if (s[0])
	{
		_putchar(s[0]);
		s = (s + 1);
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
