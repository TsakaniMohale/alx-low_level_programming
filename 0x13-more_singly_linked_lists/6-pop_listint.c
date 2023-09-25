#include "lists.h"

/**
 * pop_listint - function deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: head pointer.
 * Return:  Head node value.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
