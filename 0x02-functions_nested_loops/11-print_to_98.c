#include <stdio.h>

/**
 * print numbers n to 98
 */

void print_to_98(int n )
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("%d", n);
	printf("\n");
}
