#include "Operation.h"

void pint(stack_t **stack, unsigned int nb)
{
	if (!*stack)
	{
		printf("L<%d>: can't pint, stack empty", nb);
		exit(EXIT_FAILURE);
	}
	printf("%d", (*stack)->n);
}
