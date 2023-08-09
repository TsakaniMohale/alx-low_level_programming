#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *create_array - Function that create a char array, init it with a char.
 *@size: Size of the array.
 *@c: Character.
 *Return: NULL or Pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size);
	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
