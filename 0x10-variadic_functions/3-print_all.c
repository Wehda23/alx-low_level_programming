#include "variadic_functions.h"


/**
 * format_char - format character prints character.
 * @separator: String separator.
 * @ap: argument pointer.
 * Return: Void.
 */
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - format character prints integers.
 * @separator: String separator.
 * @ap: argument pointer.
 * Return: Void.
 */
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_char - format character prints float
 * @separator: String separator.
 * @ap: argument pointer.
 * Return: Void.
 */
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_char - format character prints a string
 * @separator: String separator.
 * @ap: argument pointer.
 * Return: Void.
 */
void format_string(char *separator, va_list ap)
{
	char *s = va_arg(ap, char *);

	switch ((int)(!s))
	case 1:
		s = "(nil)";

		printf("%s%s", separator, s);
}

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 * @...: arguements passed into the function.
 * Return: Void.
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
