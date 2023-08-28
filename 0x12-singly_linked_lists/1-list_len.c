#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head node of the list
 * Return: the total
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
