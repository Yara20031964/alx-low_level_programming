#include "lists.h"

/**
 * creatnode- function create node
 * @data: parameter
 * Return: return newnode
 */
listint_t *creatnode(const int data)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);
	newnode->n = data;
	newnode->next = NULL;
	return (newnode);
}

/**
 * add_nodeint_end- function to add node in the end
 * @head: parameter
 * @n:parameter
 * Return: return new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = creatnode(n);

	if (!head || !newnode)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	listint_t *current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current = newnode;
	return (newnode);
}

