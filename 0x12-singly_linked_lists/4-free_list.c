#include "lists.h"

/**
* free_list - Function that frees list
* @head: The first address
*/

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp->next)
	{
		temp = temp->next;
		free(temp->str);
		free(temp);
	}
}
