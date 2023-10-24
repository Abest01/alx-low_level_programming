#include "lists.h"

/**
* listint_len - Function that returns the number of element
* @h: the first address
* Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
