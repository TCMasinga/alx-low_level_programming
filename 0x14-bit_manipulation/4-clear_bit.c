#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a given bit to 0
 * at a given index.
 * @n: pointer
 * @index: input value index
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
