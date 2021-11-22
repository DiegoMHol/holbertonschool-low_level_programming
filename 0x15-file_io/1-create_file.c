#include "main.h"
/**
*create_file -Function to create a file
*@filename: Name of the file to create
*@text_content: Null terminated string
*Return: 1
*/
int create_file(const char *filename, char *text_content)
{
	int fd, i, j = 0;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[j])
			j++;
		i = write(fd, text_content, j);
		if (i != j)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
