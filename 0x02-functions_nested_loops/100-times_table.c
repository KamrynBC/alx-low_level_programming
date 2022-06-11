#include "main.h"

/**
 * print_times_table - entry point
 * @n: integer value to be tested on
 *
 * Return: void
 */
void print_times_table(int n)
{

	int i, j, x, y, m, k, z, a;

	if (n <= 15 && n >= 0)
	{
		_putchar('0');
		for (y = 1; y <= n; y++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar('0');
		}
		_putchar('\n');
		for (i = 1; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				x = i * j;
				m = x % 10;
				k = x / 10;
				z = k / 10;
				a = k % 10;
				_putchar(',');
				_putchar(' ');
				if (k >= 1 && k < 10)
				{
					_putchar(k + '0');
					_putchar(m + '0');
				}
				else if (k <= 1)
				{
					_putchar(m + '0');
				}
				if (k >= 10)
				{
					_putchar(z + '0');
					_putchar(a + '0');
					_putchar(m + '0');
				}
			}
			_putchar('\n');
		}
	}
}
