#include "variadic_functions.h"

/**
* print_all - Function that print anything
* @format: the list of types of arguments passed
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list variable;
	char *result;

	va_start(variable, format);

	while (format[i])
	{
		if (i > 0 && (format[i] == 'i' || format[i] == 'c'
		|| format[i] == 'f' || format[i] == 's'))
			printf(", ");

		if (format[i] == 'c')
			printf("%c", va_arg(variable, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(variable, int));

		else if (format[i] == 'f')
			printf("%f", va_arg(variable, double));

		else if (format[i] == 's' && (result = va_arg(variable, char*)))
			printf("%s", result);

		else if (format[i] == 's')
			printf("(nil)");
		i++;
	}

	printf("\n");
}
