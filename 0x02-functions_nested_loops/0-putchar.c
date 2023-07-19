#include "main.h"

/**
* main - entry point
*
* Return: char
*/

int main(void)
{
	char *string = "_putchar";
	int index = 0;

	while (string[index] != '\0')
	{
		_putchar(string[index]);
		index++;
	}
	_putchar('\n');
	return (0);

}
