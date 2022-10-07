#include <stdlib.h>
#include "main.h"

/**
* _realloc - function that reallocates a memory block
*
* @ptr: previous allocated
* @old_size: old size byte
* @new_size:  new size
*
* Return: pointer to reallocate memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;
	char *old_ptr = ptr;

	if (ptr == NULL)
		return (NULL);
	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
		{
			new_ptr[i] = old_ptr[i];
		}
		new_ptr[i] = '\0';
		return (new_ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size < old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		for (i = 0; i < new_size; i++)
		{
			new_ptr[i] = old_ptr[i];
		}
		new_ptr[i] = '\0';
		return (new_ptr);
	}
}
