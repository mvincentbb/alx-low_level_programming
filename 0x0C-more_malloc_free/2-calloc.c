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
	unsigned int n, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = nmemb * size;
	p = malloc(n);
	if (p == NULL)
		return (NULL);
	for (i = 0; p[i]; i++)
	{
		p[i] = '\0';
	}
	return (p);
}
