#include "main.h"

/**
 * _strpbrk - Locates the first occurance in the string s
 * @s: string input
 * @accept: string input
 * Return: pointer to the byte in s  or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
