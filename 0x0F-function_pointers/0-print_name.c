#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 *
 * @name: passed in function f
 *
 * @f:A function pointer to a function taking a string on argument
 *
 */

void print_name(char *name, void (*f)(char))
{
	if (!f)
		exit(1);
	(*f)(name);
}

