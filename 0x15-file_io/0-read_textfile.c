#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file's name
 * @letters: the number of letters it should read and print
 * Return: ssize_t (actual number of letters it could read and print)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r_count = 0, w_count = 0;
	FILE *file;
	char *content = malloc(letters + 1);

	/*check if filename is not empty*/
	if (filename == NULL)
		return (0);

	/*open file*/
	file = fopen(filename, "r");
	/*was not able to open file*/
	if (file == NULL)
		return (0);

	/*save buffer*/
	content = malloc(letters + 1);
	if (content == NULL)
	{
		fclose(file);
		return (0);
	}

	/*read file*/
	r_count = fread(content, sizeof(char), letters, file);
	if (r_count == 0) /*could not read file*/
	{
		fclose(file);
		free(content);
		return (0);
	}
	content[r_count] = '\0';

	/*write file*/
	w_count = write(STDOUT_FILENO, content, r_count);

	/*if letters read != letters written*/
	if (r_count != w_count)
	{
		fclose(file);
		free(content);
		return (0);
	}

	free(content);
	/*close file*/
	fclose(file);
	return (r_count);
}

