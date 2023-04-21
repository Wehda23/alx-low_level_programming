#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: a character input as in form of separator.
 * @n: is an integer input, represents number of integers passed.
 * @...: multiple arguements passed into the function.
 * Return: Void. 
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    int i = n;
    char *s;
    va_list ap;

    if (n)
    {
        va_start(ap, n);

        while (i--)
        {
            printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)", i ? (separator ? separator : "") : "\n");
        }

        va_end(ap);
    }
    else
        printf("\n");
}