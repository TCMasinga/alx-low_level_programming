#include "main.h"
/**
 * _memcpy - copies memory area
 *@dest: stored memory
 *@src: copied memory
 *@n: number of bytes
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = 0;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
