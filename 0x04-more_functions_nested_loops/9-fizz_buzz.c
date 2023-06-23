#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 - 100
 * for mult of three print Fizz instead of number
 * for mult of five print Buzz instead of number
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % != 3)
		{
			printf("Buzz");
		}
		else if (i % 5 == 0 && i % == 3)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf('\n');
	return (0);
}
