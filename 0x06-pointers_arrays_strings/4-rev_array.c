#include "main.h"

/**
 * reverse_array - Entry point
 * @a: Integer array
 * @n: Integer size of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{
		j = n - i - 1;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
