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

	if (n % 2 == 0)
	{
		j = n - 1;
		for (i = 0; i < (n / 2); i++)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			j--;
		}
	}
	else if (n % 2 != 0)
	{
		j = n - 1;
		for (i = 0; i < (n - 1) / 2; i++)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			j--;
		}
	}
}
