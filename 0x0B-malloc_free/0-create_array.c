#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of char
 * initializes it with a specific char
 * @c: character to initialise
 * @size: input value
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
