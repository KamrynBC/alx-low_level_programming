#include "main.h"

/**
 * factorial - entry point
 * @n: integer to be used
 *
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 1 || n == 0)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
}
