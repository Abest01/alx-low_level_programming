#include "main.h"

/**
* _calloc - Function that allocate memory for an array
* @nmemb: Number memory
* @size: Size of the array
* Return: NULL if size or nmemb is zero or if malloc fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newnode;
	unsigned int i, j = 0;

	i = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);

	newnode = malloc(i);
	if (!newnode)
		return (NULL);
	while (j < i)
	{
		newnode[j] = 0;
		j++;
		nmemb++;

	}
	return (newnode);
}
