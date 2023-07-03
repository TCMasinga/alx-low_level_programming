#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: print character
 * Return: on success 1 and on error -1 is returned
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
