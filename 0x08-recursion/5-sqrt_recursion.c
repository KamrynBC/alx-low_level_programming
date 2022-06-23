#include "main.h"

/**
 * _sqrt_recursion - entry point
 * @n: integer to be used
 *
 * Return: interger square root
 */
int _sqrty_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == n/2)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
}
