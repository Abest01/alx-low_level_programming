#include "main.h"

/**
* _islower - check if a given value is a lower case alphabet
* @c: value to check for
*
* Return: 1 if value is lower else return 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
