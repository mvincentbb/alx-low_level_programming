#include <stdlib.h>
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

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
