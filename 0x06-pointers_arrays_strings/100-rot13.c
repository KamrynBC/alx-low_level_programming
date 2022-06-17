#include "main.h"

/**
 * *rot13 - Entry point
 * @str: String
 *
 * Return: Character string
 */
char *rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 13;
		}
		i++;
	}

	return (str);
}
