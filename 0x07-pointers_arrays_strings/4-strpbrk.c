#include "main.h"

/**
 * _strpbrk - Locates the first occurance in the string s
 * @s: string input
 * @accept: string input
 * Return: pointer to the byte in s  or NULL
 */

char *_strpbrk(char *s, char *accept)
{

	int index, mainString;

	while (*(s + index))
	{
		for (mainString = 0; accept[mainString]; mainString++)
		{
			if (*(s + index) == accept[mainString])
				return (s + index);
		}
		index++;
	}

	return ('\0');
}
