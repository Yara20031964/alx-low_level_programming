#include "lists.h"

/**
 * print_listint-function to print integer
 * @h: parameter
 * Return:return no.of element
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d", h->n)
			i++;
		h->next;
	}
	return (i);
}

