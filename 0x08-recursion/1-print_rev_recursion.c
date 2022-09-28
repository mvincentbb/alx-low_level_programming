#include "main.h"

/**
* _print_rev_recursion - unction that prints a string in reverse
*
*@s: char
*/
void _print_rev_recursion(char *s)
{
	char t;

	if (s[0])
	{
		t = s[0];
		s = (s + 1);
		_print_rev_recursion(s);
	}
		_putchar(t);
}
