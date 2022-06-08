#include <stdio.h>

/**
 * print alphabet in lower case followd by a new line
 * Return: always 0 (Success)
 */

void print_alphabet(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++
	}
	_putchar('\n');
}
