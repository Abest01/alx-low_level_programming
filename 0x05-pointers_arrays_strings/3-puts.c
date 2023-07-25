#include "main.h"
/**
* _puts - to swap the values of two integers
* @str: value to be swapped
*
* Return: i
*/

void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
