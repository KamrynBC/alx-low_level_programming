#include "main.h"

/**
 * print_triangle - Entry point
 * @size: integer to be tested on
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			j = size - (i - 1);
			k = i - 1;
			if (k >= 0)
			{
				while (k > 0)
				{
					_putchar(' ');
					k--;
				}
				if (j > 0)
				{
					while (j > 0)
					{
						_putchar('#');
						j--;
					}
					_putchar('\n');
				}
				else if (j <= 0)
				{
					_putchar('#');
					_putchar('\n');
				}
			}
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
