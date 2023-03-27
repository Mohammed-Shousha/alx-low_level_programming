#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, len = 0, shift = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2)
		shift = 1;

	for (i = len / 2; i < len - shift; i++)
		_putchar(str[i + shift]);

	_putchar('\n');
}
