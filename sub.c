#include "monty.h"
/**
 * sub - subs the top two elements of the stack.
 * @stack: stack_t
 * @nb: int
*/
void sub(stack_t **stack, unsigned int nb)
{
	stack_t *sub, *and = *stack;

	if (!(*stack)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", nb);
		exit(EXIT_FAILURE);
	}
	while (and->next)
		and = and->next;
	sub = malloc(sizeof(stack_t));
	sub->n = and->prev->n - and->n;
	sub->next = NULL;
	sub->prev = and->prev->prev;
	and->prev->prev->next = sub;
	free_for_free(and);
}
