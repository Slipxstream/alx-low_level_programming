#include "main.h"

/**
*flip_bits - gets the number of bits to flip to get from n to m
*@n: initial number
*@m: final number
*
*Return: the number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, ans;
	unsigned int j, i;

	j = 0;
	ans = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (ans == (diff & ans))
			j++;
		ans <<= 1;
	}

	return (j);
}
