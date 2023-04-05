#include "lists.h"
/**
 * sum_listint - calculate all data(n) of the listint_t that is linked
 * @head:is the first node of the linked list
 * Return: the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
