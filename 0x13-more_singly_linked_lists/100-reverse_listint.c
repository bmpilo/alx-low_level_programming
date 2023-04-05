#include "lists.h"
/**
 * reverse_listint - reverse a listeint_t linked list
 * @head: point to firt node in list
 * Return: poiter tofirst node of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
