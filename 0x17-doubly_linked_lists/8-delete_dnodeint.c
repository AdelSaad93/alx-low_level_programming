#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp;
	unsigned int i;

	if (index == 0)
	{
		if (*head != NULL)
		{
			*head = (*head)->next;
			if (*head != NULL)
				(*head)->prev = NULL;
			free(current);
			return (1);
		}
		return (-1);
	}

	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;

	current->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = current;

	free(temp);

	return (1);
}

