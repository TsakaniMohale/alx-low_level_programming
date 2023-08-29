#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list.
 * @head: head pointer.
 */

void free_listint2(listint_t **head)
{
	listint_t *node,  *temp;

	if (head)
	{
		node = *head;
		while ((temp = node) != NULL)
		{
			node = node->next;
			free(temp);
		}
		*head = NULL;
	}
}
