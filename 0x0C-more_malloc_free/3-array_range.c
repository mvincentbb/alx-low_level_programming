#include <stdlib.h>
#include "main.h"

/**
* array_range -function that creates an array of integers 
*
* @min: min int of the array
* @max: max int of the array
*
* Return: array
*/
int *array_range(int min, int max)
{
	int n, i;
	int *arr;

	if (min > max)
		return (NULL);
	n = max - min + 2;
	arr = malloc(sizeof(int) * n);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		arr[i] = min + i;
	}
	arr[n] = '\0';
	return arr;
}
