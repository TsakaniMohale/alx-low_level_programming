#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes  node at index of a listint_t linked list.
 * @head: Pointer head
 * @index: node to delete.
 * Return: -1 or 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	prev = *head;

	for ( ; i < index - 1 && prev != NULL; i++)
		prev = prev->next;

	if (prev == NULL || prev->next == NULL)
		return (-1);

	tmp = prev->next;
	prev->next = tmp->next;
	free(tmp);
	return (1);
}
