#include "Operation.h"
/**
 * pall - The opcode pall prints all the values on the stack
 * @node: lists
*/
void pall(lists *node)
{
	while (node)
	{
		printf("%d\n", node->data);
		node = node->next;
	}
}
