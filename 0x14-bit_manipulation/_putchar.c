#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the characher c to stdout
 * @c: the characher to print
 * Return: On success 1, else return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1))
}
