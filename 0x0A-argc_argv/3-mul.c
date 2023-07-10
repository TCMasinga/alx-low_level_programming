#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * @argv: arrays of arguments
 * @argc: number of arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);

	return (0);
	}
	printf("Error\n");
	return (1);
}
