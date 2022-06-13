#include "main.h"

/**
 * _strlen - Entry point
 * @s: character to be used
 *
 * Return: integer result
 */
void rev_string(char *s)
{
	char *point, temp;
	int len, i;

	len = 0;
	point = &*s;
	while (*point != '\0')
	{
		len = len + 1;
		point = point + 1;
	}
	for (i = 0; i < len; i++)
	{
		temp = s[i];
		s[i] = s[len - 1];
		s[len - 1] = temp;
		len = len - 1;
	}
}
