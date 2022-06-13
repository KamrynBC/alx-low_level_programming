#include "main.h"

/**
 * _strlen - Entry point
 * @s: character to be used
 *
 * Return: integer result
 */
int _strlen(char *s)
{
	char *point;
	int len;

	len = 0;
	point = &*s;
	while (*point != '\0')
	{
		len = len + 1;
		point = point + 1;
	}

	return (len);
}

