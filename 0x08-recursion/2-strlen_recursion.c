#include "main.h"

/**
 * string_counter - helper function to get length of a string
 * 
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