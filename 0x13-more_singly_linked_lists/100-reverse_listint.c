#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Function reverses a listint_t linked list.
 * @head: Start node pointer.
 * Return: Pointer to first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *tmp = NULL;
		
	while (*head)
	{
		tmp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = tmp;
	}
	(*head) = prev;
	return (*head);
}
