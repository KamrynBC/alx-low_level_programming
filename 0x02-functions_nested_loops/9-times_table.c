#include "main.h"

/**
 * times_table - prints the 9 times tables
 * @void: no argument
 *
 */
void times_table(void)
{
	int i, j, k, m, x, y;

	_putchar('0');
	for (y = 1; y <= 9; y++)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar('0');
	}
	_putchar('\n');
	for (i = 1; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			x = i * j;
			k = x / 10;
			if (k >= 1)
			{
				m = x % 10;
				 _putchar(',');
				 _putchar(' ');
				 _putchar(k + '0');
				 _putchar(m + '0');
			}
			else
			{
				m = x % 10;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
		}
		_putchar('\n');
	}
}
