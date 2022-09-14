#include <stdio.h>
#include "main.h"
/**
* main - mutiple of 3 or 5
*
* Return: Always 0
*/
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
