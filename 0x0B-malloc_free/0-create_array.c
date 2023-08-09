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

	i = 0;
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		if (s == NULL)
		return (NULL);
		s[i] = c;
		i++;
	}
	return (s);
}
