#include "main.h"

/**
 * _isupper - detects characters in uppercase
 *
 * @c: input character
 *
 * Return: (0) false, (1) true
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
