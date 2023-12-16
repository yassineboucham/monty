#include "monty.h"
/**
 * mul - muls the top two elements of the stack.
 * @stack: stack_t
 * @nb: int
*/
void mul(stack_t **stack, unsigned int nb)
{
	stack_t *mul, *and = *stack;

	if (!(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", nb);
		exit(EXIT_FAILURE);
	}
	while (and->next)
		and = and->next;
	mul = malloc(sizeof(stack_t));
	mul->n = and->prev->n * and->n;
	mul->next = NULL;
	mul->prev = and->prev->prev;
	and->prev->prev->next = mul;
	free_for_free(and);
}
