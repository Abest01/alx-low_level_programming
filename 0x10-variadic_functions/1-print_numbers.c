#include "variadic_functions.h"

/**
* print_numbers - Function that print numbers followed by newline
* @separator: the separator
* @n: the number of argument
* Return: NULL if separator is null
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list variable;
	unsigned int i, j;

	if (separator == NULL)
		return;
	va_start(variable, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(variable, int);
		printf("%d", j);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
