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

	x = i % 10;
	_putchar(x);

	return (x);
}
