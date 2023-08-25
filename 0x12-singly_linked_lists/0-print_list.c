#include "lists.h"

/**
* print_list - Function use to print all element
* @h: constant string
* Return: The number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *tmp = (list_t *)h;

	if (!h)
		return (count);
	while (tmp)
	{
		if (!tmp->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
