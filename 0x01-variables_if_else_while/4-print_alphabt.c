#include <stdio.h>
/**
*main - entry poin
*
*Return: 0 means success else -1
*/
int main(void)
{
	int a = 97;

	for (; a < 123; a++)
	{
		if (a != 101 && a != 113)
			putchar(a);
	}
	putchar('\n');
	return (0);

}
