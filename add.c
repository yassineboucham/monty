#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @stack: stack_t
 * @nb: int
*/
void add(stack_t **stack, unsigned int nb)
{
	stack_t *add, *and = *stack;

	if (!(*stack)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", nb);
		exit(EXIT_FAILURE);
	}
	while (and->next)
		and = and->next;
	add = malloc(sizeof(stack_t));
	add->n = and->n + and->prev->n;
	add->next = NULL;
	add->prev = and->prev->prev;
	and->prev->prev->next = add;
	free_for_free(and);
}
