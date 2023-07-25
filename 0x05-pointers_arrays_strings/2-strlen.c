#include "main.h"
/**
* _strlen - to swap the values of two integers
* @s: value to be swapped
*
* Return: i
*/

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
