#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
			sum += i;
		else if ((i % 5) == 0)
			sum += i;
	}
	printf("%l\n", sum);
	return (0);
}
