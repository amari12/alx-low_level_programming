#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
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
	char *content;

	if (filename == NULL) /*check filename not empty*/
		return (0);
	file = fopen(filename, "r"); /*open file*/
	if (file == NULL) /*not able to open file*/
		return (0);
	content = malloc(letters + 1); /*save memory*/
	if (content == NULL)
	{
		fclose(file);
		return (0);
	}
	r_count = fread(content, sizeof(char), letters, file); /*read file*/
	if (r_count == 0) /*could not read file*/
	{
		fclose(file);
		free(content);
		return (0);
	}
	content[r_count] = '\0';
	w_count = write(STDOUT_FILENO, content, r_count); /*write file*/
	if (r_count != w_count)
	{
		fclose(file);
		free(content);
		return (0);
	}
	free(content);
	fclose(file); /*close file*/
	return (r_count);
}

