#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes a character c to stdout
 * @c: printout
 * Return: 1 (success)
 * on error, return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
