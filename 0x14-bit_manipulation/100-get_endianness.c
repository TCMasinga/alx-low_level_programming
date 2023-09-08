#include "main.h"
#include <stdlib.h>

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *p = (unsigned char *) &i;

	return (*p);
}
