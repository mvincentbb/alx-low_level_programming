#include <stdlib.h>
#include "main.h"

/**
*_calloc - function that allocates memory for an array
*
* @nmemb: number of elements of array
* @size: size bytes of each array element
*
* Return: pointer to allocate memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	return (p);
}
