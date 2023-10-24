#include "lists.h"

/**
* add_nodeint - Function that adds new node at the beginnig
* @head: the first address
* @n: the constant integer
* Return: Number of node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);

}

