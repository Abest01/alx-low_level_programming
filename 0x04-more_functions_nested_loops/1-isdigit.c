#include "main.h"

/**
* _isdigit - entry value
* @c: value to search for
*
* Return: 0 is a success else 1
*/

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);

}
