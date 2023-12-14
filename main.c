#include "monty.h"
/**
* main - the main function
* @argc: int
* @argv: char
* Return: 0
*/
int main(int argc, char **argv)
{
	FILE *file;
	size_t len = 0;
	char *str, *func, *s;
	unsigned int nb, i = 0, opcode_not_found = 0, j = 0;
	stack_t *stack = NULL;
	instruction_t list[] = {
		{"push", push}, {"pall", pall}, {"pint", pint}, {NULL, NULL} };

	if (argc != 2)
		fputs("USAGE: monty file", stdout), exit(EXIT_FAILURE);
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "%s %s\n", "Error: Can't open file ", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&str, &len, file) != -1)
	{
		func = strtok(str, " \n\t"), j++;
		if (func != NULL)
		{
			s = strtok(NULL, " \n\t"), i = 0;
			if (s)
				nb = atoi(s);
			while (list[i].opcode)
			{
				if (strcmp(func, list[i].opcode) == 0)
					opcode_not_found = 1, list[i].f(&stack, nb);
				i++;
			}
			if (opcode_not_found == 0)
			{
				fprintf(stderr, "L%d: %s %s\n", j, "unknown instruction", func);
				exit(EXIT_FAILURE);
			} opcode_not_found = 0;
		}
	}
	fclose(file);
	return (0);
}
