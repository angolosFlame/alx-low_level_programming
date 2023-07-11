#include "main.h"

/* A function that creates a file
 * @filename: name of the file
 * @text_content is NULL
 * returns 1 on success and -1 on failure
 * the file has a permission of rw-------
 * if the file already exists, it will be truncated
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int flopen, flwrite, len = 0;

	if (filename == NULL)
		return (-1);

	flopen = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (flopen < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	flwrite = write(flopen, text_content, len);
	close(flopen);
	if (flwrite < 0)
		return (-1);
	return (1);
}
