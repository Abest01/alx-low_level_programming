#include "main.h"

/**
* string_nconcat - Function that concatenates two strings
* @s1: First string
* @s2: Second string
* @n: unsigned integer
* Return: NULL if string is empty
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newnode;
	int i, l = 0, k = 0;
	unsigned int j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		n = j;

	newnode = malloc(i + j + 1);

	if (!newnode)
		return (NULL);
	l = i + n;

	while (k < l)
	{
		if (k < i)
		{
			newnode[k] = s1[k];
		}
		else
			{
				newnode[k] = s2[k];
			}
			k++;
	}
	return (newnode);
}
