#include "main.h"

/**
* print_last_digit - to check
* 
* Return: last digit
*/
int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;

	if (last_digit < 0)
		_putchar(last_digit * -1);
	else
		_putchar(last_digit + '0');
	return (last_digit);
}