#include "main.h"

/* A function that reads a textfile and prints it to the POSIX standard output
 * @letters :is the number of letters it should read and print
 * returns the actual number of letters it could read and print
 * 
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * 
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t no_letters;
	char *text;
	int file_mode;

	if (filename == NULL)
		return 0;
	text = malloc(sizeof(char)*letters);
	
	if (text == NULL)
		return 0;
	file_mode = open(filename, O_RDONLY);
	if (file_mode == -1)
	{
		free(text);
		return 0;
	}
	no_letters = read(file_mode, text, sizeof(char)*letters);
	if (no_letters == -1)
	{
		free(text);
		close(file_mode);
		return 0;
	}
	no_letters = write(STDOUT_FILENO, text, no_letters);
	if (no_letters == -1)
	{
		free(text);
		close(file_mode);
		return 0;
	}
	free(text);
	close(file_mode);
	return (no_letters);
}
