#include "main.h"
/**
* rev_string - to swap the values of two integers
* @s: value to be swapped
*
* Return: i
*/

void rev_string(char *s)
{
	int i = 0, a = 0, Aux;


	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > a)
	{
		Aux = s[i];
		s[i--] = s[a];
		s[a++] = Aux;
	}
}
