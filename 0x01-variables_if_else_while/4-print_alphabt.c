#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e')
		{
			i = i;
		}
		else if (i == 'q')
		{
			i = i;
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
