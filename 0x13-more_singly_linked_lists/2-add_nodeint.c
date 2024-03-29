#include "lists.h"

/**
 * add_nodeint - add a new node at the begining of the linked list
 * @head: point to the first node on the list
 * @n: is data to insert in the new node
 * Return: pointer to the new node  or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return(NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
