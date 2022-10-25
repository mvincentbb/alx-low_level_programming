#include "lists.h"

/**
* listint_len - returns number of elements
* @h: pointer to the linked lists
*
* Return: number of elements in a linked listint_len
*/
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
