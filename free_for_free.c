#include "monty.h"

void free_for_free(stack_t *head)
{
stack_t *walk;
	walk = head;
	while (head)
	{
		walk = head->prev;
		free(head);
		head = walk;
	}
}
