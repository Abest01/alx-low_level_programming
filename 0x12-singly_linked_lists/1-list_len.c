#include "lists.h"
/**
* list_len - The funtion that the number of elements
* @h: the string given
* Return: count
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (!h)
		printf(" ");

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);

}
