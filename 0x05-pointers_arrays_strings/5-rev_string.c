#include "main.h"
/**
 * rev_string -  reverses a string
 * @s: a string
 * Return: string in reverce
 */
void rev_string(char *s)
{
	int i;
	int a = 0;
	char rv = s[0];


	while (s[a] != '\0')
		a++;
	for (i = 0; i < a; i++)
	{
		a--;
		rv = s[i];
		s[i] = s[a];
		s[a] = rv;
	}
}
