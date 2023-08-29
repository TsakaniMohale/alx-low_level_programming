#include "lists.h"

/**
 * add_nodeint_end - function adds a new node at the end of a listint_t list.
 * @head: head pointer
 * @n: elemets to be added
 *  Return: added node address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *existing;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	existing = *head;
	if (!(*head))
		*head = new;
	else
	{
		existing = *head;
		while (existing->next)
			existing = existing->next;
		existing->next = new;
	}
	return (*head);
}
