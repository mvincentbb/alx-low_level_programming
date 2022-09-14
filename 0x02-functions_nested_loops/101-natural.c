#include <stdio.h>
#include "main.h"
/**
* natural_numbers - mutiple of 3 or 5
*
* @n: integer
*
* Return: Always 0
*/
void natural_number(int n)
{
	int i, sum;

	for (i = 0; i < n; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d", sum);
}
