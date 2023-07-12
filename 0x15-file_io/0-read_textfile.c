#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it
 *			to the POSIX standard
 * filename: pointer to the name of the file
 * letters: number of letters it should read and print
 *
 * Return: the result to the standard output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bR, bW;
	char *hold;
	FILE *f;

	if (filename == NULL)
		return (0);

	f = fopen(filename, "r");
	if (f == NULL)
	{
		return (0);
	}

	hold = (char*)malloc(letters + 1);
	if (hold == NULL)
	{
		fclose(f);
		return (0);
	}

	bR = fread(hold, sizeof(char), letters, f);
	if (bR == 0)
	{
		fclose(f);
		free(hold);
		return (0);
	}

	hold[bR] = '\0';

	bW = fwrite(hold, sizeof(char), bR, stdout);
	if (bW != bR)
	{
		fclose(f);
		free(hold);
		return (0);
	}

	fclose(f);
	free(hold);
	
	return (bR);
}
