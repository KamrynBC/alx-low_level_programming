#include "main.h"

/**
 * *_strchr - entry point
 * @s: first string
 * @c: second string
 *
 * Return: pointer to c in s. null if other wise.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		else
		{
			i++;
		}
	}
	p = &s[i];

	return (p);
}
