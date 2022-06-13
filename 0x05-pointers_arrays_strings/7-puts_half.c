#include "main.h"

/**
 * puts_half - Entry point
 * @str: String o be used
 *
 * Return: void
 */
void puts_half(char *str)
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

	if (len % 2 == 0)
	{
		for (i = len / 2; i <= len - 1; i = i + 1)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2 != 0)
	{
		for (i = (len - 1) / 2; i <= len - 1; i = i + 1)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
