#include "main.h"

/**
* _isalpha - to check
* @c: value for check
* Return: 0 is a success
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
