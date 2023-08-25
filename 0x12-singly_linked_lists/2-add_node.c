#include "lists.h"

/**
* add_node - function that adds a new node at the beginning of a list_t list
* @head: address of the head pointer
* @str: string contained in the new pointer
*
* Return: The address of the new pointer
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(*new_node));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	while (str && str[i])
		i++;
	new_node->len = i;

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
