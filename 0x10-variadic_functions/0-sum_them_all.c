#include "variadic_functions.h"

/**
* sum_them_all - Function that returns the sum of all its parameter
* @n: the number to be summed
* Return: 0 if n is NULL
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list(variable);
	unsigned int i, j;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(variable, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(variable, int);
		sum = sum + j;
	}
	return (sum);
	va_end(variable);
}
