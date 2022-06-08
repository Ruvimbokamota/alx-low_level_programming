#include <stdio.h>

/**
 * print alphabet 10x in lowercase
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char k;
	int i;

	i  = 0;
	while (i <= 9)
	{
		k = 'a';
		while (k <= 'z')
		{
			_putchar(k);
			k++;
		}
		_putchart(10);
		i++;
	}
}
