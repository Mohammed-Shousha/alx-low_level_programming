#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, p;

	for (i = 0 ; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			if (j == 0)
				_putchar(j + '0');
			else if (p >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
		}
		_putchar('\n');

	}
}
