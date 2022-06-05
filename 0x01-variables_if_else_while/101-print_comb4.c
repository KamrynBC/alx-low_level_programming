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
	int k;

	for (i = '0'; i < '7'; i++)
	{
		for (j = '0'; j < '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					i = i;
					j = j;
					k = k;
				}
				else if (i < j && j > k)
				{
					i = i;
					j = j;
					k = j + 1;
				}
				else if (i < j && j == k)
				{
					i = i;
					j = j;
					k = j + 1;
				}
				else if (i > j && j < k)
				{
					i = i;
					j = i + 1;
					k = j + 1;
				}
				else if (i > j && j > k)
				{
					i = i;
					j = i + 1;
					k = j + 1;
				}
				else if (i > j && j == k)
				{
					i = i;
					j = i + 1;
					k = j + 1;
				}
				else if (i == j && j < k)
				{
					i = i;
					j = i + 1;
					k = j + 1;
				}
				else if (i == j && j > k)
				{
					i = i;
					j = i + 1;
					k = j + 1;
				}
				else if (i == j && j == k)
				{
					i = i;
					j = i + 1;
					k = j + 1;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				putchar(',');
				putchar(' ');
			}
		}
	}
	fwrite("789", 3, 1, stdout);
	putchar('\n');

	return (0);
}
