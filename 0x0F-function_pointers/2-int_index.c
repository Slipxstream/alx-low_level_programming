#include "function_pointers.h"

/**
  * int_index - searches for an int
  * @array: array to be perused
  * @size: array size
  * @cmp: pointer to comparative func
  *
  * Return: If no element matches, return -1. If size <= 0, return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
