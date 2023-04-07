#include "main.h"





/**
 * string_counter - helper function to get length of a string
 * @string: string input.
 * @length: integer input.
 * Return: Length of a string
 */
int string_counter(char *string, int length)
{
	if (*string)
	{
		return (string_counter(string + 1, length + 1));
	}
	else
		return (length);

}

/**
 * _strlen_recursion - Get the lenght of a string.
 * @s: string input
 * Return: length of a string.
 */



int _strlen_recursion(char *s)
{

	return (string_counter(s, 0));

}



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

	len = _strlen_recursion(s) - 1;

	return (check_palindrom(s, 0, len));
}
