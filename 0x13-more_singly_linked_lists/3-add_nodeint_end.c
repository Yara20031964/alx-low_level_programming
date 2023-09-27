#include "lists.h"

/**
 * add_nodeint_end- function to add node in the end
 * @head: parameter
 * @n:parameter
 * Return: return
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = creatnode(n);

	if (!head || !newnode)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
	}
	return (newnode);
}

