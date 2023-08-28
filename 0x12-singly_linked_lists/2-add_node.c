#include "lists.h"
#include <string.h>

/**
 * add_node -function that adds a new node at the beginning of a list_t list
 * @head: head node
 * @str: string to dupicate
 * Return: new element address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *s;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	new->str = s;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
