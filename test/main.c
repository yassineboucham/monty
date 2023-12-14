#include "Operation.h"
/**
 * main - the main function
 * Return: 0
*/
int main(void)
{
	FILE *file;
	char str[100], *f, *s;
	int nb;
	lists *node;

	file = fopen("./bytecodes/00.m", "r");
	if (!file)
		return (0);
	while (fgets(str, sizeof(str), file) != NULL)
	{
		f = strtok(str, " ");
		if (f != NULL)
		{
			s = strtok(NULL, " ");
			if (s)
			{
				nb = atoi(s);
				push(&node, nb);
			}
			else
				pall(node);
		}
	}
	fclose(file);
	return (0);
}
