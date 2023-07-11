#include "main.h"

/* A function that appensds text at the end of a file
 * @filename: the name of the file and text_content is NULL
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist 
 * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int flopen, flwrite;
	int i = 0;

	if (filename == NULL)
		return (-1);

	flopen = open(filename, O_RDWR | O_APPEND);

	if (flopen < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(flopen);
		return (1);
	}

	while (text_content[i] != '\0')
	{
		i++;
	}
	flwrite = write(flopen, text_content, i);

	if (flwrite < 0)
		return (-1);

	return (1);
}
