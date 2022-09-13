#include "main.h"
/**
* main - print _putchar
*
* Return: Always 0
*/
int main(void)
{
	char ch[8] = "_putchar";
	char c;
	int i;

	for (i = 0; i < 8; i++)
	{
		c = ch[i];
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
