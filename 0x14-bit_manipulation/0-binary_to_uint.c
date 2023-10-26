#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int
 * @b: binary pointer argument.
 *
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	int i, base_two;

	if (!b)
		return (0);

	a = 0;

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, base_two = 1; i >= 0; i--, base_two *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			a += base_two;
		}
	}

	return (a);
}
