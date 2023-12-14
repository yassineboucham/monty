#include "Operation.h"
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

	unsigned int nb, i = 0;

	stack_t *stack = NULL;

	instruction_t list[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{NULL, NULL}
	};

	if (argc != 2)
		return (0);
	file = fopen(argv[1], "r");
	if (!file)
		return (0);
	while (getline(&str, &len, file) != -1)
	{
		func = strtok(str, " ");
	if (func != NULL)
	{
	s = strtok(NULL, " ");
	if (s)
	nb = atoi(s);
	i = 0;
	while (list[i].opcode)
	{
		if (strcmp(func, list[i].opcode) == 0)
			list[i].f(&stack, nb);
		i++;
	}
	}
	}
	fclose(file);
	return (0);
}
