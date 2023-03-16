#include <stdio.h>
/**
 * main - entry point of the program
 *
 * description: uses the printf function to print out the
 * 	size of various type to the standard output
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* Prints a message to the standard output */
	printf("The size of a char is: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %ld bytes(s)\n", sizeof(int));
	printf("size of a long int: %ld bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %ld bytes(s)\n", sizeof(long long int));
	printf("size of a double: %ld byte(s)\n", sizeof(double));
	printf("size of a long double: %ld byte(s)\n", sizeof(long double));
	printf("size of a float: %ld bytes(s)\n", sizeof(float));
	return (0);
}
