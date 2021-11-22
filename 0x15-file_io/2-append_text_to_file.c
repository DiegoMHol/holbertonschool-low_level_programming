#include "main.h"
/**
*append_text_to_file -appends text at the end of file
*@filename: name of file
*@text_content: string to add
*Return: 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int append, l, sts;

	if (filename == NULL)
	{
		return (-1);
	}

	append = open(filename, O_WRONLY | O_APPEND);

	if (append == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	for (l = 0; text_content[l]; l++)
	{
		;
	}

	sts = write(append, text_content, l);
	if (sts == -1)
		return (-1);
	close(append);
	return (1);
}
