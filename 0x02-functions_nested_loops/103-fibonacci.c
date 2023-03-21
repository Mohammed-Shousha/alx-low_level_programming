#include <stdio.h>

int main(void)
{
	long int a = 1, b = 2, c, sum = 0;
	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}
