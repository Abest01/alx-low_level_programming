#include "lists.h"

/**
* add_node_end - function that adds a new node at the end of a list_t list
* @str: string contained in new poiter
* @head: pointer
*
* Return: NULL if fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;
	int i = 0;

	new_node = malloc(sizeof(*new_node));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	while (str && str[i])
	i++;
	new_node->len = i;
	new_node->next = NULL;
	tmp = *head;
	if (!tmp)
	{
		*head = new_node;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
	} 
	return (*head);
}
