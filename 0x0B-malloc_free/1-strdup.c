#include "main.h"
#include <stdio.h>

/**
*_strdup - string duplicate
*
*@str: variable str
*Return: NULL
*/

char *_strdup(char *str)
{
	{
	char *array;
	int k = 0;
	int t = 0;

	if (str == NULL)
		return (NULL);
	while (str[t] != '\0')
		t++;
	array = malloc(sizeof(*array) * (t + 1));
	if (array == NULL)
		return (NULL);
	while (k < t)
	{
		array[k] = *str;
		k++;
		str++;
	}

	return (array);
}

}
