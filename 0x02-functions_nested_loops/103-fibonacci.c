#include <stdio.h>
/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	long sum, i, prev, next, res;

	prev = 1;
	next = prev + 1;
	res = next + prev;
	sum = 2;
	while (res <= 4000000)
	{
		prev = next;
		next = res;
		res = prev + next;
		if (res % 2 == 0)
		{
			sum += res;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
