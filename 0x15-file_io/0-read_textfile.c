#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it
 *			to the POSIX standard
 * @filename: pointer to the name of the file
 * @letters: number of letters it should read and print
 *
 * Return: the result to the standard output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bR, bW;
	char *hold;
	int f;
	
	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	
	hold = malloc(sizeof(char) * (letters + 1));
	if (hold == NULL)
	{
		return (0);
	}

	bR = read(f, hold, letters);
	bW = write(STDOUT_FILENO, hold, bR);
	close(f);
	free(hold);
	return (bW);
}
