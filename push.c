#include "monty.h"
/**
 * push - The opcode push pushes an element to the stack
 * @stack: stack_t
 * @nb: int
*/
void push(stack_t **stack, unsigned int nb)
{
	stack_t *walk = *stack;
	stack_t *node;
	(void)nb;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_for_free(*stack);
		exit(EXIT_FAILURE);
	}
	node->n = atoi(data);
	node->next = NULL;
	if (!(*stack))
		*stack = node;
	else
	{
		while (walk->next)
			walk = walk->next;
		walk->next = node;
	}
	node->prev = walk;
}
