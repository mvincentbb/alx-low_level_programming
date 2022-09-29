#include "main.h"
/**
* _pow_recursion -  function that returns the factorial of a given number
*
* @x: int
* @y: int
* Return: factorial of a number
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	y--;
	return (x * _pow_recursion(x));
}
