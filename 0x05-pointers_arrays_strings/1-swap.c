#include "main.h"

/**
 * swap_int - swaps the values of two ints
 * @a: integer 1
 * @b: integer 2
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

