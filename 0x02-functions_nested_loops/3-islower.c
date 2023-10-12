#include "main.h"
/**
 * _islower - this determines if char is lowercase
 *
 * @c: is char that is being checked
 *
 * Return: 1 if char is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

