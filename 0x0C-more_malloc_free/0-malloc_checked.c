#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 *malloc_checked - Function allocates memory using malloc.
 *@b: Number of memory blocks
 *Return: Pointer to the block
 */

void *malloc_checked(unsigned int b)
{
	void *memory_block = malloc(b);

	if (memory_block == NULL)
		exit(98);

	return (memory_block);
}
