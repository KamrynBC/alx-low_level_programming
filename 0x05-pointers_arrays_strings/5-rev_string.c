#include "main.h"

/**
 * print_rev - Entry point
 * @s: String to be used
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	char *point;

	point = &*s;
	while (*point != '\0')
	{
		point = point + 1;
	}
	if (*point == '\0')
	{
		point = point - 1;
		while (*point > 0)
		{
			_putchar(*point);
			point = point - 1;
		}
	}
	_putchar('\n');
}
