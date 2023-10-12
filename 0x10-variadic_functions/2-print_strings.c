#include "variadic_functions.h"

/**
* print_string - Funtion that prints strings
* @separator: The separato
* @n: Number of arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list variable;
	unsigned int i;
	char* j;

	if (!separator)
		return;
	va_start(variable, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(variable, char*);
		if (!j)
			printf("(nil)");
		printf("%s", j);
		if ( i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}