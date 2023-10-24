#include "lists.h"

/**
* add_nodeint_end - Function that adds a new node at the end
* @head: First adress
* @n: the Integer
* Return: The new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);
	newnode->next = '\0';
	newnode->n = n;
	temp = *head;

	if (!temp)
		*head = temp = newnode;
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
			temp->next = newnode;
	}
	return (newnode);
}
