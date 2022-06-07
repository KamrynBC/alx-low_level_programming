#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * @void - no argument
 *
 */
void jack_bauer(void)
{
	int i = '0', j, k, m;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; (i <= '1' && j <= '9') || (i == '2' && j < '4'); j++)
		{
			for (k = '0'; (j <= '9' && k <= '5'); k++)
			{
				for (m = '0'; (k <= '5' && m <= '9'); m++)
				{
					i = i;
					j = j;
					k = k;
					m = m;
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(m);
					_putchar('\n');
				}
			}
		}
	}
}
