#include "main.h"
/**
 * swap_int - it swaps the integers
 * @a: input integer a
 * @b: input integer b
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
