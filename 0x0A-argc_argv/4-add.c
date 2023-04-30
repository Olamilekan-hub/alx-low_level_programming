#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of program
 * Description: A program that adds all positive number
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: always 0 (success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i = 1, add = 0, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
			i++;
	}
	printf("%d\n", add);
	return (0);
}
