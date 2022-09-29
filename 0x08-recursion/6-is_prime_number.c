#include "main.h"

/**
 * is_prime_check - check the prime
 *
 * @n: int
 * @mid: mid of n
 *
 * Return: 0 or 1;
 */

int is_prime_check(int n, int mid)
{
	if (n <= 1)
		return 0;
	else if (n % mid == 0)
		return 0;
	else if (mid == n / 2)
		return 1;
	return (is_prime_check(n, mid + 1));
}



/**
* is_prime_number - function if the input integer is a prime number
*
* @n: int
* Return: 1 if prime number or  0 if not
*/

int is_prime_number(int n)
{
	return is_prime_check(n, 2);
}
