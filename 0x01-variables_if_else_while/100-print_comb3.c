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
	int k[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int l;
	int m;

	i = '0';
	j = '1';
	for (i = '0'; i < j; i++)
	{
		for (j = '1'; j > i; j++)
		{
			l = k[i];
			m = k[j];
			putchar("l");
			putchar("m");
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
