#include "variadic_functions.h"
void print_all(const char * const format, ...)
{
	va_list ap;
	char *sval;
	int ival;
	double dval;
	int i;

	va_start(ap, format);
	for (i = 0; format && format[i]; i++)
	{
		switch (format[i])
		{
			case 'c':
				ival = va_arg(ap, int);
				printf("%c", ival);
				break;
			case 'i':
				ival = va_arg(ap, int);
				printf("%d", ival);
				break;
			case 'f':
				dval = va_arg(ap, double);
				printf("%f", dval);
				break;
			case 's':
				sval = va_arg(ap, char *);
				if (sval == NULL)
				{
					printf("(nill)");
				}
				else
				{
					printf("%s", sval);
				}
				break;
			default:
				break;
		}
		if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
	}
	va_end(ap);
	printf("\n");
}
