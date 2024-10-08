#include "main.h"

/**
 * set_bit - bit to 1.
 * @index: starting pos. from 0
 * @n: pointer to number to be used
 * Return: 1 on succes , or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
}
