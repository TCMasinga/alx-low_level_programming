#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: character
 * Return: 0
 */

char *_strdup(char *str)
{
	char *dupl;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	dupl = malloc(sizeof(char) * (i + 1));

	if (dupl == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)

		dupl[len] = str[len];

	return (dupl);
}
