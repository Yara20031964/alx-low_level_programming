#include "lists.h"

/**
 * sum_listint- function
 * @head: parameter
 * Return: return 0 or sum
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
