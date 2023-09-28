#include "main.h"

/**
* _puts_recursion - function that print strings
* @s: String
*/

void _puts_recursion(char *s)
{
	if (!(s) || s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
