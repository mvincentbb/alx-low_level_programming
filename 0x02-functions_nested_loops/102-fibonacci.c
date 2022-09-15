#include <stdio.h>
/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	long i, prev, next, res;

	prev = 1;
	next = prev + 1;
	res = next + prev;
	printf("%ld, %ld, %ld, ", prev, next, res);
	for (i = 1; i < 50; i++)
	{
		if (i == 49)
		{
			printf("%ld\n", res);
		}
		else
		{
		prev = next;
		next = res;
		res = prev + next;
		printf("%ld, ", res);
		}
	}
	return (0);
}
