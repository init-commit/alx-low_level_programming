#include "main.h"

/**
* create_file - creates a file
* @filename: name of the file
* @text_content: string to write to the file
* Return: 1 on success otherwise -1
* -1 if filename is null
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int length = 0;
	ssize_t b_Written;
	mode_t permission = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permission);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			length++;
		b_Written = write(fd, text_content, length);
		if (b_Written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	if (close(fd) == -1)
		return (-1);
	return (1);
}
