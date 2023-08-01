#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - calculate the sum of data in listint_t
 * @head: input value of node
 * Return: the sum of all the data (n),
 * if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
