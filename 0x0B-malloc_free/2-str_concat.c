#include "main.h"
/**
* str_concat - Function that concatenates two strings
* @s1: First sring
* @s2: Second string
* Return: NULL if function fails
*/
char *str_concat(char *s1, char *s2)
{
	char *newnode;
	int i, j, k, l = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	k = i + j;
	newnode = malloc(sizeof(*newnode) * (k + 1));

	while (l < k)
	{
		if (l < i)
		{
			newnode[l] = *s1;
			l++;
			s1++;
		}
		else
		{
			newnode[l] = *s2;
			l++;
			s2++;
		}

	}
	return (newnode);

}
