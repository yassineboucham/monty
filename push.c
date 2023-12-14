#include "Operation.h"
/**
 * push - The opcode push pushes an element to the stack
 * @stack: stack_t
 * @nb: int
*/
void push(stack_t **stack, unsigned int nb)
{
	stack_t *node;

	if (!nb)
	{
		printf("L<line_number>: usage: push integer");
		exit(EXIT_FAILURE);
	}
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	node->prev = *stack;
	node->n = nb;
	node->next = NULL;
	if (*stack)
	{
		(*stack)->next = node;
	}
	*stack = node;
}
