#include  "main.h"

/**
* array_range - Function that create an array of integer
* @min: minimum number
* @max: maximum number
* Return: NULL if min > max and malloc fails
*/

int *array_range(int min, int max)
{
	int *new;
	int i, j = 0;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)

	new = malloc(sizeof(int) * ((max -  min) + 1));
	if (!new)
		return (NULL);

	while (min <= max)
	{
		new[j] = min;
		j++;
		min++;
	}
	return (new);
}
