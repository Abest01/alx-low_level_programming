#include "lists.h"

/**
* print_list - the function that prints all element of list_t
* @h: the string given
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!(h->str))
			printf(" [0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
