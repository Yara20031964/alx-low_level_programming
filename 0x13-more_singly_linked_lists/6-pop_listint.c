#include "lists.h"

/**
 * pop_listint- function to add node in the end
 * @head: parameter
 * Return: return
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *node;

	if (!head || !*head)
		return (0);
	node = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = node;
	return (i);
}
