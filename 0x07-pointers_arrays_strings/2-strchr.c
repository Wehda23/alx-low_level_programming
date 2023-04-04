#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string input
 * @c: character input
 * Return: a pointer to the first occurance of the character c in string s
 *         or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int index = 0;

	for (index = 0; s[index] >= '\0' ; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
