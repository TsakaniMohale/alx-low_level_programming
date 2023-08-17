#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index -execute a funtion that searches an integer
 *
 * @array: array received by our funtion
 * @size: the size of the array
 * @cmp: a function that is executed as a parameter
 * Return: the index of the searched int or on failurii
 * ii
 * 
 *
 *
 *
 *
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0) 
	{
		return -1;
	}

	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return i;
		}
	}

	return -1;
}


