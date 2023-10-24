#include "lists.h"

/**
* print_listint - Function that prints all the elment of listin_t
* @h:  the first address
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
