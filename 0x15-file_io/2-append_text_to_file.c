#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: content to add
 * Return: int (1 succes, -1 fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *p_file;
	size_t len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	p_file = fopen(filename, "r+");
	if (p_file == NULL)
		return (-1); /*file does not exist*/
	len = strlen(text_content);
	fwrite(text_content, 1, len, p_file);
	fclose(p_file);
	return (1);
}

