#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024

/**
* main - copies the content of a file to another file
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, exit with code on failure
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to; /* file descriptors */
char buffer[BUFSIZE]; /* buffer to read and write */
ssize_t bytes_read, bytes_written; /* number of bytes read and written */

/* check if number of arguments is correct */
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

/* open the source file in read-only mode */
fd_from = open(argv[1], O_RDONLY);

/* check if file can be opened */
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

/* open the destination file in write-only mode, create it if it does not exist, truncate it otherwise */
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

/* check if file can be opened or created */
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

/* read and write 1024 bytes at a time until end of file or error*/
while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);

/* check if write was successful*/
if (bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/* check if read was successful*/
if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

/*close the source file descriptor*/
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}

/* close the destination file descriptor*/
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}

return (0); /*success*/
}
