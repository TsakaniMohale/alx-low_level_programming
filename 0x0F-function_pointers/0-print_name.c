#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 *
 * @name: passed in function f
 *
 * @f:A function pointer to a function taking 9u889u88 on argument
 *
 */

void print_name(char *name, void (*f)(char))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

