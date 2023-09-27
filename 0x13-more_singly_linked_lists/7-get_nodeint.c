#include "lists.h"

/**
 * get_nodeint_at_index- function
 * @head: parameter
 * @index: parameter
 * Return: return null or nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	for (node = head; node && i < index; node = node->next, i++)
		;
	return (node);
}
