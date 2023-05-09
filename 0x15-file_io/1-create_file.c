#include "main.h"


/**
 * create_file - Create a file object
 * @filename: Is the name of the file to create.
 * @text_content: Is a NULL terminated string to write to the file.
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file, length;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[length] != '\0')
			length++;

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, length);

	return (1);
}