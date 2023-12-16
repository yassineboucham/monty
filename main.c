#include "monty.h"
char *data;
/**
* main - the main function
* @argc: int
* @argv: char
* Return: 0
*/
int main(int argc, char **argv)
{
	FILE *file;
	size_t len;
	char *str = NULL, *func;
	unsigned int i = 0, opcode_not_found = 0, curr_line = 0;
	stack_t *stack = NULL;
	instruction_t list[] = {
		{"push", push}, {"pall", pall}, {"pint", pint}, {"pop", pop}, {"swap", swap},
		{"add", add}, {"sub", sub}, {NULL, NULL} };

	if (argc != 2)
		fputs("USAGE: monty file\n", stdout), exit(EXIT_FAILURE);
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]), exit(EXIT_FAILURE);
		fclose(file);
	}
	while (getline(&str, &len, file) != -1)
	{
		func = strtok(str, " \n\t"), curr_line++;
		if (func != NULL)
		{ data = strtok(NULL, " \n\t");
			if (is_digit(data) == -1 && strcmp(func, "push") == 0)
			{ fprintf(stderr, "L%d: usage: push integer\n", curr_line);
		    koulchi_free(stack, str, file), exit(EXIT_FAILURE);
			} i = 0;
			while (list[i].opcode)
			{
				if (strcmp(func, list[i].opcode) == 0)
					opcode_not_found = 1, list[i].f(&stack, curr_line);
				i++;
			}
			if (opcode_not_found == 0)
			{fprintf(stderr, "L%d: %s %s\n", curr_line, "unknown instruction", func);
			koulchi_free(stack, str, file), exit(EXIT_FAILURE);
			} opcode_not_found = 0;
		}
	} koulchi_free(stack, str, file);
	return (0);
}
