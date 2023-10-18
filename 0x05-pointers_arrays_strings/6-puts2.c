#include "main.h"

/**
 * puts2 - print only one out of two chars starting with the first
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int o;
	int t = 0;
	int longi = 0;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		longi++;
	}

	t = longi - 1;

	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}

