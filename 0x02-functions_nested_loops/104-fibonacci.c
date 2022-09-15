#include <stdio.h>
/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	double i, prev, next, res;

	prev = 1;
	next = prev + 1;
	res = next + prev;
	printf("%.0f, %.0f, %.0f, ", prev, next, res);

	for (i = 1; i < 96; i++)
	{
		prev = next;
		next = res;
		res = prev + next;
		if (i == 95)
		{
			printf("%.0f\n", res);
		}
		else
		{
		printf("%.0f, ", res);
		}
	}
	return (0);
}
