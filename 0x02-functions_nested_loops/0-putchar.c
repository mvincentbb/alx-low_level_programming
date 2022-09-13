#include <stdio.h>
#include "main.h"
/**
* main - print _putchar
*
* Return: Always 0
*/
int _putchar(void)
{
	int ch[8] = "_putchar";
	
	for(int i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
