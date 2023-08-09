#include "main.h"
#include <stdlib.h>

/**
*create_array - of charcter
*@c: character
*@size: usigned integer
* Return: NULL
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
