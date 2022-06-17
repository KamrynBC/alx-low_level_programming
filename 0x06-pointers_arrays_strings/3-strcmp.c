#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Integer of difference
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		i++;
	}
	if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
	{
		j = s1[i] - s2[i];

		return (j);
	}
	else
	{
		return (0);
	}
}
