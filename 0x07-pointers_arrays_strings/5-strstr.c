#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string input
 * @needle: string input
 * Return: pointer to the begging of located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	while (*haystack)
	{
		index = 0;

		for (; *haystack != '\0'; haystack++)
        {
            char *first = haystack;
            char *second = needle;

            while (*first == *second && *second != '\0')
            {
                first++;
                second++;
            }

            if (*second == '\0')
                return (haystack);
        }

		haystack++;
	}

	return ('\0');
}
