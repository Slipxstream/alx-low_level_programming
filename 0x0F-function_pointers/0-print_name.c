#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: name to be priunted
 * @f: pointer to printing function
 *
 * Rteurn: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
