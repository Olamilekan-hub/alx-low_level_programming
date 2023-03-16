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
	double d;
	long double ld;
	float f;

	/* Prints a message to the standard output */
	printf("size of a char: %u byte(s)\n", (unsigned int)sizeof(c));
	printf("size of an int: %u bytes(s)\n", (unsigned int)sizeof(i));
	printf("size of a long int: %u bytes(s)\n", (unsigned int)sizeof(li));
	printf("size of a long long int: %u bytes(s)\n", (unsigned int)sizeof(l));
	printf("size of a double: %u byte(s)\n", (unsigned int)sizeof(d));
	printf("size of a long double: %u byte(s)\n", (unsigned int)sizeof(d));
	printf("size of a float: %u bytes(s)\n", (unsigned int)sizeof(f));
	return (0);
}
