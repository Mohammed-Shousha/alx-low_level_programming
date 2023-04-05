#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	int x;

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	x = _sqrt_recursion(n / 2) * 2;
	if (x * x > n)
		x = (x + n / x) / 2;

	return (x);
}
