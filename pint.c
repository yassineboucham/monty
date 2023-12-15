#include "monty.h"
/**
* pint - prints the value at the top of the stack, followed by a new line
* @stack: lists
* @nb: unsigned int
*/
void pint(stack_t **stack, unsigned int nb)
{
	stack_t *head = *stack;

	if (!head)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", nb);
		exit(EXIT_FAILURE);
	}
	while (head->next)
	{
		head = head->next;
	}
	printf("%d\n", head->n);
}
