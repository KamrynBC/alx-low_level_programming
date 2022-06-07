#include "main.h"

/**
 * _isalpha - checks for alphabetic character, lowercase or upper case
 * @c: The integer to print
 *
 * Return: 1 if the value is alphabetical. 0 if otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
