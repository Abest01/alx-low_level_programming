
#include "main.h"

/**
* malloc_checked - value of malloc
* @b: value of the usigned int
* Return: NULL if pointer is is success
*/

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
