#include "main.h"

/**
 * _sqrt_recursion - entry point
 * @n: integer to be used
 *
 * Return: interger square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0 || n == 1)
		{
			return (n);
		}
		else
		{
			return (n / 2);
		}
	}
}
