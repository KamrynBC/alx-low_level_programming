#include "main.h"

/**
 * *cap_string - Entry point
 * @string: Character string to be used
 *
 * Return: character
 */
char *cap_string(char *string)
{
	int i, j;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	for (j = 0; string[j] != '\0'; j++)
	{
		if (string[j] == (' ' || '\t' || '\n' || ',' || ';' || '.' || '!'))
		{
			j++;
			if (string[j] >= 'a' && string[j] <= 'z')
			{
				string[j] = string[j] - 32;
				continue;
			}
			else
			{
				string[j] = string[j];
			}
		}
		else if (string[j] == ('\?' || '\"' || '(' || ')' || '{' || '}'))
		{
			j++;
			if (string[j] >= 'a' && string[j] <= 'z')
			{
				string[j] = string[j] - 32;
				continue;
			}
			else
			{
				string[j] = string[j];
			}
		}
	}
	return (string);
}
