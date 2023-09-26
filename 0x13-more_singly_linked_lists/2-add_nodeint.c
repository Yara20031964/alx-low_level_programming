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
 * add_nodeint- function add node at beginning
 * @head: parameter
 * @n: parameter
 * Return: return null or newnode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = creatnode(n);

	if (!head || !newnode)
		return (NULL);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

