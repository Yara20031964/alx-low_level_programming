#include "lists.h"

/**
 * creatnode- function create node
 * @data: parameter
 * Return: return newnode
 */
listint_t *creatnode( const int data)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);
	newnode->n = data;
	newnode->next = NULL;
	return (newnode);
}
/**
 * insert_nodeint_at_index- function
 * @head: parameter
 * @idx:parameter
 * @n:parameter
 * Return: return
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = creatnode(n), *node;
	unsigned int i = 0;

	if (!head || !newnode || !*head)
		return (NULL);
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
