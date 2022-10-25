#include "lists.h"
#include <stdio.h>

/**
* pop_listint - deletes the head node of a listint_t
* @head: double pointer to the beginning ot the listint_t
*
* Return: the head node data(n)
*/
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL && *head == NULL)
		return (0);
	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
