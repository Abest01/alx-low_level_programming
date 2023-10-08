#include "main.h"

/**
* malloc_checked - Function that allocates memory
* @b: usigned integer
* Return: NuLL if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	char *newnode;

	newnode = malloc(b);
	if (!newnode)
		exit(98);
	return (newnode);
}
