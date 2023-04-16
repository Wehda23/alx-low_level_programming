#include "main.h"

/**
 * string_nconcat - add two strings together by concatenation.
 * @s1: string input
 * @s2: string input
 * @n: maximum number of bytes to use
 * Return: return point to a newly allocated memory or null in case fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length_1 = 0, length_2 = 0;

	if (s1)
	{
		while (s1[length_1])
			++length_1;
	}

	if (s2)
	{
		while (length_2 < n && s2[length_2])
			++length_2;
	}

	concat = malloc(sizeof(char) * length_1 + length_2 + 1);
	if (!concat)
		return (NULL);

	for (n = 0; n < length_1; ++n, ++concat)
		*concat = s1[n];

	for (n = 0; n < length_2; ++n, ++concat)
		*concat = s2[n];

	*concat = '\0';

	return (concat - length_1 - length_2);
}
