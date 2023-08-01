#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: double pointer
 * Return: pointer to the node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
