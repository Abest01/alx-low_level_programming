#include <stdio.h>
/**
*main - entry poin
*
*Return: 0 means success else -1
*/
int main(void)
{
	int a = 97;
	int A = 65;

	for (; a < 123; a++)
		putchar(a);
	for (; A < 91; A++)
		putchar(A);
	putchar('\n');
	return (0);
}
