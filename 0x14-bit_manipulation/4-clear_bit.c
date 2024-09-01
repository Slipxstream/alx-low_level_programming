#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 
 * @n: number of i
 * @index: starting from 0 
 * Return: 1 on success, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
