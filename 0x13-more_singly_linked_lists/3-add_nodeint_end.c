#include "lists.h"

/**
* add_nodeint_end - function that add node at the end
* @head: the pointer to the first node
* @n: is the integer in the first node
* Return: NULL if adress failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	tmp = *head;
	if (!tmp)
		*head = new_node;
	else
	{
		while (tmp->next)
		tmp = tmp->next;
			tmp->next = new_node;
	}
	return (new_node);
}
