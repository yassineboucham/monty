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
/**
 * koulchi_free - bzaf tl hdra
 * @stack: stack_t
 * @str: char
 * @file: FILE
*/
void koulchi_free(stack_t *stack, char *str, FILE *file)
{
	free_for_free(stack), free(str), fclose(file);
}
