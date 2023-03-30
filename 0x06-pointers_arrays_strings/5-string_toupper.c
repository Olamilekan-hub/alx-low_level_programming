#include "main.h"
/**
 * string_toupper - changes lowercase char to uppercase
 * @str: pointer to the array of char to be converted
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
