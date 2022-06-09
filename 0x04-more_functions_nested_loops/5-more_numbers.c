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
			k = j;
			if (j > 9)
			{
				while (k > 9)
				{
					k = k / 10;
				}
				_putchar(k);
			}
			m = j % 10;
			_putchar(m);
		}
		_putchar('\n');
	}
}
