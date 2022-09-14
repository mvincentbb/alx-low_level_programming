#include "main.h"
/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	int prev, next, res;

	prev = 0;
	next = prev + 1;
	res = next + prev;
	for (i = 1; i < 16; i++)
	{
		printf("%d, %d, %d", prev, next, res);
		prev = next;
		next = res;
		res = prev + next;
	}
	printf("\n");
}
