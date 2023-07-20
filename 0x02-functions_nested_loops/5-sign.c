#include "main.h"

/**
* print_sign - to check
* @n: value for check
* Return: 0 print 0, 1 print 1, -1 prints -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
		_putchar(-1);
	return (-1);

}

