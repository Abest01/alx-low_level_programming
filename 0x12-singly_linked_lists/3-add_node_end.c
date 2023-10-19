#include "lists.h"

/**
* add_node_end - The function that adds a new node at the end
* @head: the head of first address
* @str: The string
* Return: NULL if the new element fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	int i;
	list_t *temp = *head;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->next = '\0';

	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	newnode->len = i;
	if (!temp)
		*head = newnode;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);

}
