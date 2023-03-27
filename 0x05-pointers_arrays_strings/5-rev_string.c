#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char c;
	int i, last, len = 0;

	while (s[len] != 0)
		len++;

	last = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[last];
		s[last--] = c;
	}
}
