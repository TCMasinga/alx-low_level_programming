#include <unistd.h>
#include "main.h"

/**
 * _putchar - writres a character c to stdout
 * @c: a character to print
 * Return: on success 1 or -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
