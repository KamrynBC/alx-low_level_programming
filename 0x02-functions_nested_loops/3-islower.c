#include "main.h"

/**
 * _islower - Entry point
 * @c: Integer argument to be checked
 *
 * Return: 1 if the number is lower case alphabet. 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
