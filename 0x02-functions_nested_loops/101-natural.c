#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
void main(void)
{
	long int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
			sum += i;
		else if ((i % 5 == 0)
			sum += i;
	}
	print("%l\n", sum);
	return (0);
}
