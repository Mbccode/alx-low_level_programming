#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: number of letters printed.
 *
 * Return: number of letters printed. If it fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fed;
	size_t nrd, nwr;
	char *buff;

	if (!filename)
		return (0);
	fed = open(filename, O_RDONLY);

	if (fed == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
	{
		close(fed);
		return (0);
	}

	nrd = read(fed, buff, letters);
	if (nrd == -1)
	{
		free(buff);
		close(fed);
		return (0);
	}

	nwr = write(STDOUT_FILENO, buff, nrd);

	if (nwr == -1)
	{
		free(buff);
		close(fed);
		return (0);
	}

	close(fed);
	free(buff);

	return (nwr);
}
