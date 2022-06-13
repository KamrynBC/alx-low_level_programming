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

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[n - 1]);
	printf("\n");
}
