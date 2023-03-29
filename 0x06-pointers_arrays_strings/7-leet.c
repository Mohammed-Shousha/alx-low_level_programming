#include "main.h"

/**
 * leet - encodes a string in 1337
 * @str: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *str)
{
	int i = 0, j;

	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if(str[i] == letters[j])
				str[i] = numbers[j];
		}

		i++;
	}

	return (str);
}
