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
	listint_t *newnode = malloc(sizeof(listint_t)), *node;
	unsigned int i = 0;

	if (!head || !newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (!idx)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			newnode->next = node->next;
			node->next = newnode;
			return (newnode);
		}
		i++;
		node = node->next;
	}
	free(newnode);
	return (NULL);
}
