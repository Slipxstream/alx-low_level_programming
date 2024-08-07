#include "main.h"
#include <stdio.h>
/**
 * string_toupper - converts all lowercase letters in a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to destination.
 */

char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}
