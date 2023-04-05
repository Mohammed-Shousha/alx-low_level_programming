#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, n - 1));
}

/**
 * check_prime - helper function to check if n is prime
 * @n: the number to check
 * @i: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);

	return (check_prime(n, i - 1));
}
