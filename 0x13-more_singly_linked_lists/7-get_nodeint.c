#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t
 * @head: input value pointer
 * @index: input value index
 * Return: pointer to the node,
 * or NULL if does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
			i++;
	}

	return (temp ? temp : NULL);
}
