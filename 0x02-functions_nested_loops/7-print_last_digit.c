#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: integer that has test on it
 *
 * Return: the last digit of the number i
 *
 */
int print_last_digit(int i)
{
	int x;

	if (i >= 0)
	{
		x = i % 10;
		_putchar(x + '0');

		return (x);
	}
	else
	{
		x = (i / -1) % 10;
		_putchar(x+ '0');

		return (x);
	}
}
