#include "main.h"

/**
* print_alphabet_x10 - entry point
*/

void print_alphabet_x10(void)
{
	int i = 0;
	int a;

	for (; i < 10; i++)
	{
		a = 97;
		for (; a < 123; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}

}
