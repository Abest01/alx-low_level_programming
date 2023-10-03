#include "main.h"

/**
* alloc_grid - Function that returns a pointer to a 2D array
* @width: the widthe of the array
* @height: the height of the array
* Return: NULL if malloc fails
*/

int **alloc_grid(int width, int height)
{
	int **newnode;
	int i, j;

		if (width <= 0 || height <= 0)
			return (NULL);
	newnode = malloc(sizeof(*newnode) * height);
	if (!(newnode))
		return (NULL);
	for (i = 0; i < height; i++)
	{
		newnode[i] = malloc(sizeof(int) * width);
		if (!(newnode[i]))
			return (NULL);
		for (j = 0; j < width; j++)
			newnode[i][j] = 0;
	}
	return (newnode);
	free(newnode[i]);
	free(newnode);
}
