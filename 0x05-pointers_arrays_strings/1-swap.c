#include "main.h"
/**
 * swap_int -swaps the values of two integers a and b
 * @a: A pointer to an integer that will be updated
 * @b: B pointer to an integer that will be updated
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
