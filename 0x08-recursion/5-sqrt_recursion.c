#include "main.h"

/**
 * _sqrt_find - find square
 *
 * @n: int
 * @res: possible square
 *
 * Return: square
 */

int _sqrt_find(int n, int res)
{
	if (res * res == n)
		return (res);
	else if (res < 0)
		return (-1);
	return (_sqrt_find(n, res - 1));
}





/**
* _sqrt_recursion - function that returns the natural square root of a number
*
* @n: int
*
* Return: sqrt
*/
int _sqrt_recursion(int n)
{
	int res;

	res = n / 2 + 1;
	if (n == 0)
		return (0);
	return (_sqrt_find(n, res));
}
