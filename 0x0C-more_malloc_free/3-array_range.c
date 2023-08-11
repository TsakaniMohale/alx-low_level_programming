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
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*) * ((max - min) + 1));

	if (aPtr == NULL)
		return (NULL);
	i = 0;

	while (min <= max)
	{
		p[i] = min++;
		i++;
	}
	return (p);
}
