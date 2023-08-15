#include <stdlib.h>
#include "main.h"

/**
 *array_range - creates an array of integers
 *@min: first array value
 *@max: last array value
 *Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);
	i = 0;

	while (min <= max)
	{
		array[i] = min++;
		i++;
	}
	return (array);
}
