#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0
 */
int main(void)
{
	printf("Size of char: %lu byte\n", sizeof(char));
       	printf("Size of short: %lu bytes\n", sizeof(short));
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of long: %lu bytes\n", sizeof(long));
	printf("Size of float: %lu bytes\n", sizeof(float));
	printf("Size of double: %lu bytes\n", sizeof(double));
	printf("Size of long double: %lu bytes\n", sizeof(long double));
	
	return (0);
}