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

	if (is_digit(data) == -1)
	{
		printf("L%d: usage: push integer\n", nb);
		exit(EXIT_FAILURE);
	}
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error: malloc failed\n");
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
