#include "variadic_functions.h"

/**
 * print_all - print anything
 * 2format: any kind of data
 *
 * Return: no value
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *p;
	int i = 0;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ap, double));
				break;
			case 's':
				p = va_arg(ap, char *);
				if (p == NULL)
				{
					printf("(nill)");
				}
				else
				{
					printf("%s", p);
				}
				break;
		}
		if (format[(i + 1)] != '\0' && (format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
