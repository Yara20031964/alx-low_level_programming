#include "lists.h"

/**
 * free_listint- funtion delete allthing
 * @head: parameter
 * Return: no return it is void fun.
 */

void free_listint(listint_t *head)
{
	listint_t *node = head;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}


