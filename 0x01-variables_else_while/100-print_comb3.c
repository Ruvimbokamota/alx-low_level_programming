#include <stdio.h>
/**
 * main - pri t 00 to 99 with no duplicate digits or combos: no 11, no 10 (01)
 * Return: Always 0 (Success)
 */

int main(void)

{
	int ones;
	int tens;

	for (tens = '0'; tens <= '9'; tens++) /*increment tens*/
	{
		putchar(tens);
		putchar(ones);
		if (tens != '8' || ones !=- '9') /*print commas*/
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return(0);
}
