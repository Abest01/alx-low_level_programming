#include "lists.h"

/**
* free_listint - Function that frees a list
* @head: The first adress
*/
void free_listint(listint_t *head)
{

	while (head)
		head = head->next;
	free(head);

}
