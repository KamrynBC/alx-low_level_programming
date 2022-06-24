#include "main.h"

/**
 * _atoi - entry point
 * @s: string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i, len;

	if (s[0] != '\0')
	{
		len = 0;
		while (s[i] != '\0')
		{
			len = len + 1;
			i++;
		}
		return (len);
	}
	else
	{
		return (0);
	}
}
