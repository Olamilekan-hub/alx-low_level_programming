#include <stdio.h>
#include <stdlib.h>

/**
 * main - PRINTS the opcodes of its own main function
 * @argc: the number of command-line arguments
 * @argv:an array of command-line argument strings
 *
 * Return: 0 (success), 1 on incorrect number of arguments, or
 *		2 on negative number of bytes
 */

int main(int argc, char *argv[])
{
	int i = 0, n;
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
	if (n > 0)
	{
		while (i < (n - 1))
		{
			printf("%02hhx ", p[i++]);
		}
		printf("%hhx\n", p[i]);
	}
	return (0);
}
