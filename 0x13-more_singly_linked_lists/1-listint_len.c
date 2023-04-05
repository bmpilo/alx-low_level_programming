#include "lists.h"

/**
 * listint_len - will return the linked elements number
 * @h: listint_t will be traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
