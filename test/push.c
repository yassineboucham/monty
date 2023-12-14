#include "Operation.h"
/**
 * push - The opcode push pushes an element to the stack
 * @node: lists
 * @nb: int
*/
void push(lists **node, int nb)
{
	lists *temp;

	if (!nb)
	{
		printf("L<line_number>: usage: push integer");
		exit(EXIT_FAILURE);
	}
	temp = malloc(sizeof(lists));
	if (temp == NULL)
	{
		printf("Error: malloc failed");
		exit(EXIT_FAILURE);
	}
		temp->next = *node;
		temp->data = nb;
		*node = temp;
}
