#include <stdio.h>
/**
 * main - entry point of the program
 *
 * description: uses the printf function to print out the
 *	size of various type to the standard output
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* Prints a message to the standard output */
	printf("size of a char: %u byte(s)\n", (unsigned int)(sizeof(char)));
	printf("size of an int: %u bytes(s)\n", (unsigned int)(sizeof(int)));
	printf("size of a long int: %u bytes(s)\n", (unsigned int)(sizeof(long int)));
	printf("size of a long long int: %u bytes(s)\n", (unsigned int)(sizeof(long long int)));
	printf("size of a double: %u byte(s)\n", (unsigned int)(sizeof(double)));
	printf("size of a long double: %u byte(s)\n", (unsigned int)(sizeof(long double)));
	printf("size of a float: %u bytes(s)\n", (unsigned int)(sizeof(float)));
	return (0);
}
