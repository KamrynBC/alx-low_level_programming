#include "main.h"

/**
 * reset_to_98 - Entry point
 * @n: Integer to be tested
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	int *point;

	point = &*n;
	*point = 98;
}
