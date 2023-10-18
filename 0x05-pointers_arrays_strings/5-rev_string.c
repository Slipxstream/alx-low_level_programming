#include "main.h"

/**
 * rev_string - Reverses a given string
 * @s: Input string
 * Return: Reversed string
 */

void rev_string(char *s)
{
	int i;
	int counter = 0;
	char rev = s[0];

	while (s[counter] != '\0'
	{
		counter++;
	}

	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}

