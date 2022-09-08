#include "monty.h"

global_t glo_v;

/**
 * free_glo_v - frees the global variables
 *
 * Return: no return
 */
void free_glo_v(void)
{
	free_dlistint(glo_v.head);
	free(glo_v.buffer);
	fclose(glo_v.fd);
}

/**
 * start_glo_v - initializes the global variables
 *
 * @fd: file descriptor
 * Return: no return
 */
void start_glo_v(FILE *fd)
{
	glo_v.lifo = 1;
	glo_v.cont = 1;
	glo_v.arg = NULL;
	glo_v.head = NULL;
	glo_v.fd = fd;
	glo_v.buffer = NULL;
}

/**
 * check_res - checks if the file exists and if the file can
 * be opened
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: file struct
 */
FILE *check_res(int argc, char *argv[])
{
	FILE *fd;

	if (argc == 1 || argc > 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");

	if (fd == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

		return (fd);
}

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	void (*f)(stack_t **stack, unsigned int line_number);
	FILE *fd;
	size_t size = 256;
	ssize_t nlines = 0;
	char *lines[2] = {NULL, NULL};

	fd = check_res(argc, argv);
	start_glo_v(fd);
	nlines = getline(&glo_v.buffer, &size, fd);
	while (nlines != -1)
	{
		lines[0] = _strtoky(glo_v.buffer, " \t\n");
		if (lines[0] && lines[0][0] != '#')
		{
			f = get_opcodes(lines[0]);
			if (!f)
			{
				dprintf(2, "L%u: ", glo_v.cont);
				dprintf(2, "unknown instruction %s\n", lines[0]);
				free_glo_v();
				exit(EXIT_FAILURE);
			}
			glo_v.arg = _strtoky(NULL, " \t\n");
			f(&glo_v.head, glo_v.cont);
		}
		nlines = getline(&glo_v.buffer, &size, fd);
		glo_v.cont++;
	}
	free_glo_v();

	return (0);
}
