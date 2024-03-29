#include "lists.h"

/**
 * sum_listint - Returns sum of all the data (n) of a listint_t linked list.
 * @head: head pointer
 * Return: total sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
