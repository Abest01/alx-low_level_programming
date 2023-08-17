#include "variadic_functions.h"

/**
* sum_them_all -  Sum function
* @n: unsigned interger
*
* Return: 0 of n==0
*/

int sum_them_all(const unsigned int n, ...)
{
	int num;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(variable, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(variable, int);
		sum = sum + num;
	}
	va_end(variable);
	return (sum);
}
