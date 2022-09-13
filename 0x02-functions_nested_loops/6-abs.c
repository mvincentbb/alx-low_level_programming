#include "main.h"
/**
* _abs - print the absolute
* @n: The number to return it absolute
*
* Return: the absolute number
*/
int _abs(int n)
{
	int abs;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		abs = n * -1;
		return (abs);
	}
}
