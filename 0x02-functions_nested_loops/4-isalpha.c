#include <stdio.h>

/**
 * _isalpha checking if its alpha char
 *
 * Return: 1 if letter 0 if not
 */

int _isalpha(int c) 
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
