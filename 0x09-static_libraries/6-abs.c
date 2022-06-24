#include "main.h"

/**
 * _abs - returns an absolute value of the integer
 * @i: value that has test ran on it
 *
 * Return: i if positive. Otherwise i/-1
 *
 */
int _abs(int i)
{
	if (i >= 0)
	{
		i = i;
		return (i);
	}
	else
	{
		i = i / -1;
		return (i);
	}
}
