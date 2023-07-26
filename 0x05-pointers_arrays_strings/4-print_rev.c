#include "main.h"
/**
* print_rev - to swap the values of two integers
* print_rev - to swap the values of two integers
* @s: value to be swapped
*
* Return: i
*/

void print_rev(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	i--;
	for (; i >= 0; i--)
		_putchar (s[i]);
	_putchar ('\n');

}
