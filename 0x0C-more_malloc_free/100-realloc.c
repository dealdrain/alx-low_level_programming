#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory area(malloc and free)
 * @ptr: pointer to the ram area
 * @old_size: size of the ram to allocate
 * @new_size: the new size (bytes)
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}
