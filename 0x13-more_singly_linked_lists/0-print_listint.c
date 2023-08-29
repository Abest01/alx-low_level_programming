#include "lists.h"

/**
* print_listint - functon use to print all element
* @h: string
* Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
	listint_t *tmp = (listint_t *)h;
	size_t count = 0;

	if (!h)
		return (count);
	while (tmp)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
