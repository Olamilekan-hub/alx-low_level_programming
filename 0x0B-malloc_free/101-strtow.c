#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int cont_words(char *str);
void free_words(char **words, int n);
void copy_word(char *dest, char *src, int length);
int get_word_length(char *str);
char **strtow(char *str);

/**
 * cont_words - count the number of words in a string
 * @str: the input string
 *
 * Return: the number of words in the string
 */
int cont_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			count++;
		}
	}
	return (count);
}
/**
 * strtow - splits a string int words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (wods), or NULL if str is
 *		NULL or empty
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, n = 0;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	while (*str ==  ' ')
	{
		str++;
	}
	if (*str == '\0')
	{
		return (NULL);
	}
	n = cont_words(str);
	words = malloc((n + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < n; i++)
	{
		while (str[j] == ' ')
		{
			j++;
		}
		k = get_word_length(str + j);
		words[i] = malloc((k + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			free_words(words, i);
			return (NULL);
		}
		copy_word(words[i], str + j, k);
		j += k;
	}
	words[n] = NULL;
	return (words);
}

/**
 * get_word_length - gets the length of a word in a string
 * @str: the string containing the word
 *
 * Return: the length of the word
 */
int get_word_length(char *str)
{
	int length = 0;

	while (str[length] != ' ' && str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * copy_word - copies a word from one string to another
 * @dest: the destination string
 * @src: the source string
 * @length: the length of the word to copy
 */
void copy_word(char *dest, char *src, int length)
{
	int i;

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}

/**
 * free_words - frees an array of words
 * @words: the array of words to free
 * @n: the number of words in the array
 */
void free_words(char **words, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		free(words[i]);
	}
	free(words);
}
