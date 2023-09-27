#include "lists.h"

/**
 * free_listint2- funtion delete allthing
 * @head: parameter
 * Return: no return it is void fun.
 */

void free_listint2(listint_t **head)
{
	listint_t *node = *head;

	if (!head || !*head)
		return;
	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	(*head) = NULL;
}
