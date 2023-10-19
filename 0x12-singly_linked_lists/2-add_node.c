#include "lists.h"
/**
* add_node - The function that add a new node at the beginning
* @head: the fist node
* @str: constant string
* Return: Null if new address failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);

	newnode->next = NULL;

	for (i = 0; str[i] != '\0'; i++)
		;
	newnode->len = i;
	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
