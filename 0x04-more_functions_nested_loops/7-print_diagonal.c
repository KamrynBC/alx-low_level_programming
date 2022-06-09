#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: integer to be tested on
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = n; i >= 0; i--)
		{
			j = n - i - 1;
			if (j > 0)
			{
				while (j > 0)
				{
					_putchar(' ');
					j--;
				}
				_putchar('\\');
				_putchar('\n');
			}
			else if (j == 0)
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
