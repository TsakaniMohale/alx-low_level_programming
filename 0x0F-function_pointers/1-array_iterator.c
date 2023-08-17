#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function given a parameter
 *
 * @array: pointer to an array
 * @size: size of the array
 * @action: to be eexecuted as a parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	for (; a < size; a++)
	{
		if (!action || !array || !size)
			exit(1);
		(*action)(array[a]);
	}
}
