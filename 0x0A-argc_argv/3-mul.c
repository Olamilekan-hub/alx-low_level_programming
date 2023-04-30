#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point of program
 * Description: A program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0 (succes), 1 failed (Error)
 */

int main(int argc, char *argv[])
{
	int i, mul = 0;

	if (argc == 3)
	{
		for (i = 0; i < argc; i++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
