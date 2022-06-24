#include "main.h"

/**
 * _puts - Entry point
 * @str: String to be used
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	char *point;

	point = &*str;
	while (*point != '\0')
	{
		_putchar(*point);
		point = point + 1;
	}
	_putchar('\n');
}
