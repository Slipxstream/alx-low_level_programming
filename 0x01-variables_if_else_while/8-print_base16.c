#include <stdio.h>

/**
 * main - print all base 16 nos in lowercase followed by new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
