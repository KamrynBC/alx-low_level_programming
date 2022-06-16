#include "main.h"

/**
 * print_times_table - entry point
 * @n: integer value to be tested on
 *
 * Return: void
 */
void print_times_table(int n)
{

	int i, j, x, y;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < n; j++)
			{
				x = i * j;
				_putchar(x);
				_putchar(',');
				_putchar(' ');
			}
			y = n * n;
			_putchar(y + '0');
			_putchar('\n');
		}
	}
}
