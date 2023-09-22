#include "main.h"

/**
 * str_len - function return len
 * @s:string
 * Return: return len or 0
 */
int str_len(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - function
 * @h:argument of function
 * Return: return number of nodes an len
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", str_len(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}


