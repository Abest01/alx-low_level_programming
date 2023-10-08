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
	int i, k, l = 0, m = 0;
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
	k = i + j;

	newnode = malloc(k + 1);

	if (!newnode)
		return (NULL);

	while (l < k)
	{
		if (l < i)
		{
			newnode[l] = s1[l];
		}
		else
			{
				newnode[l] = s2[m];
				m++;
			}
			l++;
	}
	return (newnode);
}
