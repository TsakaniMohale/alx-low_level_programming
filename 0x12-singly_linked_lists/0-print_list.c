#include "lists.h"

/**
 * print_list - prints all the elements in the linked list
 * @h: where the node start
 * Return: Total number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t start = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		start += 1;
		h = h->next;
	}
	return (start);
}
