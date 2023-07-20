#include "main.h"

/**
* _isupper - entry value
* @c: value to search for
*
* Return: 0 is a success else 1
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);

}
