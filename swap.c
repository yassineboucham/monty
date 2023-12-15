#include "monty.h"
/**
 * swap - swap
 * @stack: stack_t
 * @nb: int
*/
void swap(stack_t **stack, unsigned int nb)
{
	stack_t *top = *stack;
	stack_t *s1, *s2;

	while (top->next)
		top = top->next;
	s1 = top->prev;
	s2 = top;
	if (!(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack empty\n", nb);
		exit(EXIT_FAILURE);
	}
	top->prev->prev->next = top;
	top->prev = top->prev->prev;
	top->next = s1;
	s1->prev = s2;
	s1->next = NULL;
}
