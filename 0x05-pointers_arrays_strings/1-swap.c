#include "main.h"

/**
 * swap_int - Entry point
 * @a: First integer to be tested
 * @b: Second integer to be tested
 *
 * Retrun: void
 */
void swap_int(int *a, int *b)
{
	int *point1, *point2, temp;

	point1 = &*a;
	point2 = &*b;
	temp = *point1;
	*point1 = *point2;
	*point2 = temp;
}
