#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the file name 
 * @text_content: content to append to the file name
 * Return: 1 in case of success, -1 in case of failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, file, length;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;

		w = write(file, text_content, length);

		if (w == -1)
			return (-1);
	}

	close(file);
	return (1);
}