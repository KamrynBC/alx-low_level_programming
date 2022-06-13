#include "main.h"

/**
 * puts2 - Entry point
 * @str: Character to be used
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < 10; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
