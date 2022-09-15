#include <stdio.h>
/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	double prev, next, res;
	int i;

	prev = 1;
	next = prev + 1;
	res = next + prev;
	printf("%.0f, %.0f, %.0f, ", prev, next, res);

	for (i = 1; i < 97; i++)
	{
		prev = next;
		next = res;
		res = prev + next;
		if (i == 96)
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
