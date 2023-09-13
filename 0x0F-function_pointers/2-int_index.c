#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index -execute a function that searches an integer
 *
 * @array: array received by our funtion
 * @size: the size of the array
 * @cmp: a function that is executed as a parameter
 * Return: the index of the searched int or on failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
