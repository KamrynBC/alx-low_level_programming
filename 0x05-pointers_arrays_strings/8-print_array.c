#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: First integer
 * @n: Second integer
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[n - 1]);
		printf("\n");
	}
	else if (n <= 0)
	{
		printf("\n");
	}
}
