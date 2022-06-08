#include "main.h"

/**
 * times_table - prints the 9 times tables
 * @void: no argument
 *
 */
void times_table(void)
{
	char i, j, x;

	for (i = 0; i <= 9; i++)
	{
		x = i * j;
		for (j = 0; j <= 9; j++)
		{
			_putchar(x);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
