#include "Operation.h"
/**
* main - the main function
* @argc: int
* @argv: char
* Return: 0
*/
int main(int argc, char **argv)
{
	FILE *file;
	size_t len = 0;
	char *str;

	if (argc != 2)
		return (0);
	file = fopen(argv[1], "r");
	if (!file)
		return (0);
	while (getline(&str, &len, file) != -1)
		call(str);
	fclose(file);
	return (0);
}
