#include "monty.h"
/**
* pop - pop
* @stack: lists
* @nb: unsigned int
*/
void pop(stack_t **stack, unsigned int nb)
{
	stack_t *walk = *stack;
	stack_t *end;

	if (!(*stack))
	{
		printf("L<%d>: can't pint, stack empty\n", nb);
		exit(EXIT_FAILURE);
	}
	while (walk->next)
		walk = walk->next;
	if (walk->prev == NULL)
	{
		walk = NULL;
		free(walk);
		return;
	}
	end = walk->prev;
	free(walk);
	end->next = NULL;
}
