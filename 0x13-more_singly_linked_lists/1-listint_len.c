#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked listint_t list.
 * @h: Head pointer.
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num += 1;
	}
	return (num);
}
