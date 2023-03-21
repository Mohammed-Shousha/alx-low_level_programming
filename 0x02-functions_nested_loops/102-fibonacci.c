#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	long int a = 1, b = 2, c, i;

	printf("%ld, %ld", a, b);
	for (i = 2; i < 50; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

