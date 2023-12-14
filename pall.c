#include "Operation.h"
/**
* pall - The opcode pall prints all the values on the stack
* @stack: lists
* @nb: unsigned int
*/
void pall(stack_t **stack, unsigned int nb)
{
	stack_t *current = *stack;
	(void) nb;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->prev;
	}
}
