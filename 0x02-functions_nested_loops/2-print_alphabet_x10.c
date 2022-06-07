#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet in lower case, ten times in ten rows
 * @void - no arguement
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
