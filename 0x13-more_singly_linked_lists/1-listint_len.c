#include "lists.h"

/**
* listint_len - functon use to print all element
* @h: string
* Return: Number of nodes
*/

size_t listint_len(const listint_t *h)
{
	listint_t *tmp = (listint_t *)h;
	size_t count = 0;

	if (!h)
		return (count);
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
