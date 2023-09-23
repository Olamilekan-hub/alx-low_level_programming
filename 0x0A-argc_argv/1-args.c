#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point of the program
 * Description: prints the number of arguments passed into it
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: always 0
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
