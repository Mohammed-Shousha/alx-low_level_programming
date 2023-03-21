#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i;
	long a = 1, b = 2, c, a_1, a_2, b_1, b_2, h_1, h_2;

	printf("%ld, %ld, ", a, b);
	for (i = 2; i < 90; i++)
	{
		c = a + b;
		printf("%ld, ", c);
		a = b;
		b = c;
	}

	a_1 = a / 10000000000;
	a_2 = a % 10000000000;
	b_1 = b / 10000000000;
	b_2 = b % 10000000000;

	for (i = 90; i < 97; i++)
	{
		h_1 = a_1 + b_1;
		h_2 = a_2 + b_2;
		if ((a_2 + b_2) > 9999999999)
		{
			h_1 += 1;
			h_2 %= 10000000000;
		}
		printf("%ld%ld", h_1, h_2);
		if (i != 96)
			printf(", ");

		a_1 = b_1;
		a_2 = b_2;
		b_1 = h_1;
		b_2 = h_2;
	}

	printf("\n");
	return (0);
}
