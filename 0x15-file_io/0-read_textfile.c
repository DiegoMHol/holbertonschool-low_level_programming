#include "main.h"
/**
*read_textfile -Read a text and print it to POSIX
*@filename: File to be read and print
*@letters: num of letters to read and print
*Return: 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, rd, wr;

	if (filename == NULL)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}

	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		return (0);
	}

	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
	{
		return (0);
	}
	close(fd);

	return (wr);
}
