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
		return (0);
	arr = malloc(size * sizeof(char));
	arr[0] = c;
	return (arr);
}
