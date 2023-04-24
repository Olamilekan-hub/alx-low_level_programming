#include <stdio.h>
#include <stdlib.h>

/**
 * main - PRINTS the opcodes of its own main function
 * @argc: the number of command-line arguments
 * @arv:an array of command-line argument strings
 *
 * Return: 0 (success), 1 on incorrect number of arguments, or
 *		2 on negative number of bytes
 */
 
int main(int argc, char *argv[])
{
	int i, n;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (unsigned char *)main;
	for (i = 0; i < n; i++)
	{
		printf("%02x ", *(p + i));
	}
	printf("\n");
	return (0);
}
