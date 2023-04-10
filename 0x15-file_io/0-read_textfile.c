#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *text;

	if (filename == NULL)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, text, letters);
	w = write(STDOUT_FILENO, text, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(text);
		return (0);
	}

	free(text);
	close(o);

	return (w);
}
