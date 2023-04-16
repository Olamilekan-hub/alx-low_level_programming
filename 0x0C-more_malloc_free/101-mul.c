#include <string.h>
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
	unsigned int result, *prod;
	int i, j, len1, len2, carry;

	len1 = strlen(num1);
	len2 = strlen(num2);
	prod = calloc(len1 + len2, sizeof(unsigned int));
	if (prod == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			prod[i + j + 1] += (num1[i] - '0') * (num2[j] - '0') + carry;
			carry = prod[i + j + 1] / 10;
			prod[i + j + 1] %= 10;
		}
		prod[i + j + 1] += carry;
	}
	for (i = 0; i < len1 + len2; i++)
	{
		if (prod[i] != 0)
		{
			break;
		}
	}
	result = 0;
	{
		while (i < len1 + len2)
		{
			result = result * 10 + prod[i];
			i++;
		}
	}
	free(prod);
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
