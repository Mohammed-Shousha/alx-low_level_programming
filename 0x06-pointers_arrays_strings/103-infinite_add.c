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

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, rem = 0, val1 = 0, val2 = 0;
	int tot_tmp = 0, digits = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i >= size_r || j >= size_r)
		return (0);
	i--;
	j--;
	while (i >= 0 || j >= 0 || rem == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = n1[i] - '0';

		if (j < 0)
			val2 = 0;
		else
			val2 = n2[j] - '0';
		tot_tmp = val1 + val2 + rem;
		if (tot_tmp >= 10)
			rem = 1;
		else
			rem = 0;
		if (digits >= size_r)
			return (0);
		r[digits] = (tot_tmp % 10) + '0';
		digits++;
		i--;
		j--;
	}
	if (digits == size_r)
		return (0);
	r[digits] = '\0';
	rev_string(r);
	return (r);
}
