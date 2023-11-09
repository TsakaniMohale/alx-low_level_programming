#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of list
 * Return: not return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);

	}
}
