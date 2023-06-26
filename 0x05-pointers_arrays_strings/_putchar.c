#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: a character to be printed
 * Return: 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
