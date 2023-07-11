#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int j;
	int x;
	int y;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)

			y++;
	}

	str = malloc(sizeof(char) * (y + 1));

			if (str == NULL)
			return (NULL);

			x = 0;

		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
			str[x] = av[i][j];
			x++;
			}
			str[x] = '\n';
			x++;
			}
		return (str);
}
