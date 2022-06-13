#include "main.h"

/**
 * puts2 - Entry point
 * @str: Character to be used
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int i, len;
	char *point;

	len = 0;
	point = &*str;
	while (*point != '\0')
	{
		len = len + 1;
		point = point + 1;
	}

	for (i = 0; i <= len - 1; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
