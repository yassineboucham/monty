#ifndef OPERATION_H
#define OPERATION_H
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
/**
 * struct lists - singly linked list
 * @data: int
 * @next: points to the next node
*/
typedef struct lists
{
	int data;

	struct lists *next;
} lists;

void push(lists **node, int nb);

void pall(lists *node);
#endif
