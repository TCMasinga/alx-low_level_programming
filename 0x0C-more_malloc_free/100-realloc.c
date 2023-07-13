#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block,
 * using malloc and free.
 * @ptr: input value
 * @old_size: input old_size value
 * @new_size: input new_size value
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		new_ptr = malloc(new_size);

	else if (new_size == old_size)
		return (ptr);

	else
	{
	free(ptr);

	new_ptr = malloc(new_size);
	}

	return (new_ptr);
}
