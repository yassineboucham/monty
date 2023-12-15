#include "monty.h"

void swap(stack_t **stack, unsigned int nb)
{
	int element = 0;

	stack_t *walk = *stack;

	while (walk->next)
	{
		element++;
		walk = walk->next;
	}
	if (element < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack empty\n", nb);
		exit(EXIT_FAILURE);
	}
	walk->prev->next = NULL;
	walk->prev = walk->prev->prev;
	walk->next = walk->prev;
}
