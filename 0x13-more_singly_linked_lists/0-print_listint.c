#include "lists.h"
#include <stdio.h>

/**
* print_listint - unction that prints all the elements
*
* @h: list to print
*
* Return: number of elements
*/
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
