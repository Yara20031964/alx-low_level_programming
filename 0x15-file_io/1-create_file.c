#include "main.h"

/**
 * create_file-function
 * @filename: parameter
 * @text_content:parameter
 * Return:0
 */

int create_file(const char *filename, char *text_content)
{
	int fb, x, len = 0;

	if (!filename)
		return (-1);
	while (text_content[len] != '\0')
	{
		++len;
	}

	fb = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fb, text_content, len);

	if (fb == -1 || x == -1)
		return (-1);
	close(fb);
	return (1);
}
