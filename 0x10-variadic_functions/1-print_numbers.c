#include "variadic_functions.h"

/**
* print_numbers - this is the function to print new line
* @separator: the string to be printed between numbers
* @n: unsigned integer to be printed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(variable);
	int num;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(variable, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(variable, int);
		printf("%d", num);
		if (i + 1 < n)
			printf("%s", separator);
		else
			printf("\n");
	}
	va_end(nums);

}
