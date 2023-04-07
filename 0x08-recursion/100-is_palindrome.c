#include "main.h"

/**
 * check_palindrom - check for palindrom
 * @string: string input
 * @start: integer input
 * @end: integer input
 * Return: returns 1 if palindrom otherwise 0
 */
int check_palindrom(char *string, int start, int end)
{

	if (*string == '\0' || start >= end)
	{
		return (1);
	}
	else if (string[start] != string[end])
	{
		return (0);
	}
	{
		return (check_palindrom(string, start + 1, end - 1));
	}

}

/**
 * is_palindrome - checks if a string is a palindrom.
 * @s: String input
 * Return: retuns 1 if string is palindrom otherwise 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	return (check_palindrom(s, 0, len));
}
