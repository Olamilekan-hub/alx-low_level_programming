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
	char c;
	int i;
	long int li;
	long long int l;
	float f;

	/* Prints a message to the standard output */
	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of an int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(li));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(l));
	printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
