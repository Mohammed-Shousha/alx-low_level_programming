#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @str: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *str)
{
	int i = 0, j = 0;

	char plain[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cipher[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		for (j = 0; plain[j] != '\0'; j++)
		{
			if (str[i] == plain[j])
			{
				str[i] = cipher[j];
				break;
			}
		}

		i++;
	}

	return (str);
}
