#include "main.h"

/**
 * is_prime_number - entry point
 * @n: integer to be used
 *
 * Return: integer 1 if prime. 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		if (n == 2)
		{
			return (1);
		}
		else if (n != 2 && n % 2 == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
}
