#include "main.h"

/**
* create_array - Function that creates an array of chars
* @size: the size of malloc to be created
* @c: Character to be initialized
* Return: NULL if malloc fails
*/

char *create_array(unsigned int size, char c)
{
	char *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(char) * size);

	if (!newnode)
		return (NULL);

	while (i < size)
	{
		newnode[i] = c;
		i++;
	}
	return (newnode);
}
