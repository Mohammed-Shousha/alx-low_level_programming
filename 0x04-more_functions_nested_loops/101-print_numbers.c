#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int num;

	if (num < 0)
	{
		num = -n;
		_putchar('-');
	} else
	{
		num = n;
	}

	if (num / 100)
	{
		print_number(num / 100);
	}

	_putchar((num % 100) + '0');
}
