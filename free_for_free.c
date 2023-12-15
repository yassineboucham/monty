#include "monty.h"
/**
 * free_for_free - free all
 * @head: stack_t
*/
void free_for_free(stack_t *head)
{
stack_t *walk;
	walk = head;
	while (head)
	{
		walk = head->next;
		free(head);
		head = walk;
	}
}
