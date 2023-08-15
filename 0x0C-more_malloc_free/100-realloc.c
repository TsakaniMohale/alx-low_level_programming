#include <stdlib.h>
#include "main.h"

/**
 *_realloc - Function that reallocates a memory block.
 *@ptr: Pointer to the initial block.
 *@old_size: Initial block size.
 *@new_size: New block size.
 *Return: Pointer to the reallocated block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 &&  ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}
