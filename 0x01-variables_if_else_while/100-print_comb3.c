#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	i = '0';
	j = '0';
	for (i = '0'; i < '8'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j)
			{
				i = i;
				j = j;
			}
			else if (i == j)
			{
				i = i;
				j = i + 1;
			}
			else if (j < i)
			{
				i = i;
				j = i + 1;
			}
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	fwrite("89", 2, 1, stdout);
	putchar('\n');

	return (0);
}
