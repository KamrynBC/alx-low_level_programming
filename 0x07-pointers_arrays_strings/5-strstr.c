#include "main.h"

/**
 * *_strstr - Entry point
 * @haystack: first string
 * @needle: second strint
 *
 * Return: pointer to start of substring r null
 */
char *_strstr(char *haystack, char *needle)
{
	char *point;
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j] && haystack[i] != *point)
			{
				point = &haystack[i];
				break;
			}
			else
			{
				j++;
			}
		}
		i++;
	}
	if (haystack[i] == '\0')
	{
		point = &haystack[i];
	}

	return (point);
}
