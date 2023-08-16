#include <stdlib>
#include "function_pointers"

/**
 * print_name - a function that prints a name
 *
 * @name: passed in function f
 *
 * @f: pointer that takes a string on argument
 *
 */

void print_name(char *name, void (*f)(char))
{
	if (!f)
		exit(1);
	(*f)(name);
}

