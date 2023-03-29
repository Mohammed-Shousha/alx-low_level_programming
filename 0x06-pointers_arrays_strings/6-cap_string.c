#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @str: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *str)
{
	int i = 0, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (spe[j] == str[i] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}

		i++;
	}

	return (str);
}
