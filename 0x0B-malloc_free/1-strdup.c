#include "main.h"

/**
* _strdup - Function that returns a pointer to a new
* newly allocated space in memory
* @str: String to be duplicate
* Return: NULL if str fails
*/

char *_strdup(char *str)
{
	char *newnode;
	int i, j = 0;

	if (!str)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		newnode = malloc(sizeof(*newnode) * (i + 1));
	}
	if (!newnode)
		return (NULL);
	while (j < i)
	{
		newnode[j] = *str;
		str++;
		j++;
	}
	return (newnode);
}
