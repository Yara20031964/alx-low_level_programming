#include "lists.h"

/**
 * add_node - function
 * @head: parameter
 * @str: parameter
 * Return: return requirement
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead = malloc(sizeof(list_t));

	if (!head || !newhead)
		return (NULL);
	{
		free(newhead);
		return (NULL);
	}
	newhead->len = str_len(newhead->str);
}
newhead->next = *head;
*head = newhead;
return (newhead);
}
