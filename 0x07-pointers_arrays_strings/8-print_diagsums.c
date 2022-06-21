#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: first integer
 * @size: second integer
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				sum1 = sum1 + a[j];
			}
			else if (j == size - 1 - i)
			{
				sum2 = sum2 + a[j];
			}
			else if ((j == i) && (j == size - 1 - i))
			{
				sum1 = sum1 + a[j];
				sum2 = sum2 + a[j];
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
