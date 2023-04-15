#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * mul - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: the result of the multiplication
 */
unsigned int mul(char *num1, char *num2)
{
	unsigned int result = 0;
	int i, j;

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (j = 0; num2[j] != '\0'; j++)
	{
		for (j = 0; num2[j] != '\0'; j++)
		{
			result *= 10;
			result += (num1[i] - '0') * (num2[j] - '0');
		}
	}
	return (result);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	unsigned int result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	result = mul(argv[1], argv[2]);
	printf("%u\n", result);
	return (0);
}
