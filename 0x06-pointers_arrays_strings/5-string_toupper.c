#include "main.h"

/**
 * *string_toupper - Entry point
 * @string: Any char array
 *
 * Return: pointer to string
 */
char *string_toupper(char *string)
{
	int i, j;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (string[j] >= 'a' && string[j] <= 'z')
		{
			string[j] = string[j] - 32;
		}
		else
		{
			string[j] = string[j];
		}
	}

	return (string);
}
