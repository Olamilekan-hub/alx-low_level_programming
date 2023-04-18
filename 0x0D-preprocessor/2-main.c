#include <stdio.h>

/**
 * main - main entry point of the program
 * Description: the program prints the name of the file it's been compiled from
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
