#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - run the file
*
* Return: 0 means success else -1
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
