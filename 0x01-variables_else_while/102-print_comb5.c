#include <stdio.h>

/**
 * main - print a num pair starting from 00 to 99 but no repeats (00 01, 00 02, 00 03, ....)
 * Return: Always 0 Success
 */

int main(void)
{
	int tens;
	int ones;
	int t;
	int o;

	for (tens = '0'; tens <= '9'; ten++)/*print first two digit combo*/
	{
		for (ones = '0'; ones <= '9'; one++)
		{
			for (t = '0'; t <= '9'; t++)/*print second of pair*/
			{
				for (o = ones + 1; o <= '9''; o++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t);
					putchar(o);
					if(!((tens == '9' && ones == '8') &&
							       (t == '9'&& 0 == '9')))
					{
					putchar( , );
				        putchar(' ');
					}
				}
			0 = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}

