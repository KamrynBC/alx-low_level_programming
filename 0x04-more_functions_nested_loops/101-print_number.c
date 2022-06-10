#include "main.h"

/**
 * print_number - Entry point
 * @n: integer to be tested on
 *
 * Return: void
 */
void print_number(int n)
{
	int i, j, k, m, x;

	if (n > 0 || n < 0)
	{
		for (i = 9; i >= 0; i--)
		{
			m = 1;
			j = 1;
			while (j <= i)
			{
				m = m * 10;
				j++;
			}
			if (n >= 0)
			{
				if (n > m)
				{
					k = n / m;
					x = k % 10;
					_putchar(x + '0');
				}
			}
			else if (n < 0)
			{
				_putchar('-');
				n = n * -1;
				if (n > m)
				{
					k = n / m;
					x = k % 10;
					_putchar(x + '0');
				}
			}
		}
	}
	else if (n == 0)
	{
		_putchar('0');
	}
}
