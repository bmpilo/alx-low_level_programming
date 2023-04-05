#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of the linked list
 * @head: first node in the linked list
 * @index: is the index of the node that is to be returned
 * Return: pointer to node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
