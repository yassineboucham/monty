#include "monty.h"
/**
 * pint - prints the value at the top of the stack, followed by a new line
 * @stack: lists
 * @nb: unsigned int
*/
void pint(stack_t **stack, unsigned int nb)
{
	if (!*stack)
	{
		printf("L<%d>: can't pint, stack empty", nb);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
