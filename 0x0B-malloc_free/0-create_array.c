#include <stdlib.h>
#include "main.h"

/**
* create_array - function  and initializes it with a specific char
*
* @size: int
* @c: char
* Return: an array
*/

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
	return (NULL);
}
