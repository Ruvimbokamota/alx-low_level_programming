#include <stdio.h>

/**
 * prints time table
 */

void times_table(void)
{
	int row;
	int column;
	int product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = (row * colum);
			if (colum == 0)
			{
				_putchar('0' + product);
			}
			else if (product- <- 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
		_putchar('\n');
	}
}
