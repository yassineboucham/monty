#include "monty.h"
/**
* pall - The opcode pall prints all the values on the stack
* @stack: lists
* @nb: unsigned int
*/
void pall(stack_t **stack, unsigned int nb)
{
	stack_t *current = *stack;
	(void) nb;

	if (!current)
	{
		fprintf(stderr, "L%d: can't pall, stack empty\n", nb);
		exit(EXIT_FAILURE);
	}
	while (current->next)
	{
		current = current->next;
	}
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->prev;
	}
}
