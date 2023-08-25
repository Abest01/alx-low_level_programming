#include "lists.h"

/**
* list_len - Function use to print all element
* @h: constant string
* Return: The number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *tmp = (list_t *)h;

	if (!h)
		return (count);
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
