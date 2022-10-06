#include <stdlib.b>
#include "main.h"

/**
* malloc_checked - function that allocates memory using
*
* @b: int
*
* Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(b));
	if (p == NULL)
		return (98);
	*p =  &b;
	return (p);
}
