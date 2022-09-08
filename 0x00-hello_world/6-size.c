#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\4", sizeof(int));
	printf("Size of a long int: %d byte(s)\8", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\8", sizeof(long long int));
	printf("Size of a float: %d byte(s)\4", sizeof(float));
	return (0);
}
