#include "Operation.h"
/**
* call - caling functions
* @line: name of function and value
*/
void call(char *line)
{
	char *func, *s;

	unsigned int nb, i = 0;

	stack_t *stack = NULL;

	instruction_t list[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};
	func = strtok(line, " ");
	if (func != NULL)
	{
	s = strtok(NULL, " ");
	if (s)
	nb = atoi(s);
	while (list[i].opcode)
	{
		if (strcmp(func, list[i].opcode) == 0)
		{
			printf("%s == %s\n", func, list[i].opcode);
			list[i].f(&stack, nb);
		}
		i++;
	}
	}
}
