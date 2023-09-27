#include "lists.h"

/**
 * insert_nodeint_at_index- function
 * @head: parameter
 * @idx:parameter
 * @n:parameter
 * Return: return
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = creatnode(n);
	unsigned int i = 0;

	if (!head || !new_node)
		return (NULL);
	if (!idx)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (node = *head; node && i < (idx - 1); node = node->next, ++i)
		;
	newnode->next = node->next;
	node->next = newnode;
	return (newnode);
	free(newnode);
	return (NULL);
}
