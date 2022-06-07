#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: the integer to be printed
 *
 * Return: 1 if number is positive, -1 if negative and 0 if 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
