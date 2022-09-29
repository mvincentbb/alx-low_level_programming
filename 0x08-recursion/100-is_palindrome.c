#include "main.h"

/**
*_strlen_recursion - function that returns the length of a string
*
*@s: char
*Return: lenght
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_palindrome - checks to see if a string is a palindrome
 * @l: left hand index
 * @r: right hand index
 * @p: possible palindrome
 *
 * Return: 1 if palindrome 0 if not
 */
int check_palindrome(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (check_palindrome(l + 1, r - 1, p));
}
/**
* int is_palindrome - function that returns 1 or 0
*
* @s: char
*
* Return: 1 if palindrome 0 if not
*/

int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;
	return (check_palindrome(0, i, s));
}
