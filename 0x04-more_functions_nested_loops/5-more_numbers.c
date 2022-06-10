#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, k, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = (j / 10);
			m = (j % 10);
			if (k >= 1)
			{
				_putchar(k + '0');
			}
			_putchar(m + '0');
		}
		_putchar('\n');
	}
}
