#include "main.h"

/**
 * read_textfile-function
 * @filename: parameter
 * @letters:parameter
 * Return: 0 actual letter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(letters);
	ssize_t x;
	ssize_t y;
	ssize_t fb;

	fb = open(filename, O_RDONLY);
	if (fb == -1)
		return (0);
	x = read(fb, buf, letters);
	y = write(STDOUT_FILENO, buf, x);
		close(fb);
	return (x);
}


