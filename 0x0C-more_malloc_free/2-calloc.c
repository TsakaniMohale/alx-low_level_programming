#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 *_calloc - Function allocates memory for an array.
 *@nmemb: Number of elements
 *@size: Array size
 *Return: Pointer to the block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
