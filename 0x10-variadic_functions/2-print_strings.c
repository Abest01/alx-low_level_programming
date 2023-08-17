#include "variadic_functions.h"

/**
* print_strings - function to print string
* @separator: is the string to be printed btw the string
* @n: the number of strings passed to the functon
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(variable);
	unsigned int i;
	char *s;

	va_start(variable, n);
	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		s = va_arg(variable, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < n - 1)
			printf("%s", separator);
		else
			printf("\n");
	}
	va_end(variable);
}
