#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content of file
 * Return: int (1 succes, -1 fail)
 */

int create_file(const char *filename, char *text_content)
{
	size_t len, written;
	
	FILE *p_file;

	if (filename == NULL || text_content == NULL)
		return (-1);

	p_file = fopen(filename, "w");

	if (p_file == NULL)
	{
		printf("fails");
		fclose(p_file);
		return (-1);
	}
	
	len = strlen(text_content); /*get length of give text*/
	written = fwrite(text_content, 1, len, p_file); /*check how many chars were written*/
	if (written != len)
	{ /*did not write full text*/
		fclose(p_file);
		return (-1);
	}
	fclose(p_file);
	return (1);
}

