#include "monetary.h"
/**
 * is_digit - is a digit
 * @number: char
 * Return: 1
*/
int is_digit(char *number)
{
	int i = 0;

	if (!number)
		return (-1);
	while (number[i])
	{
		if (number[i] == '-' && i == 0)
		{
			i++;
			continue;
		}
		else if (number[i] < '0' || number[i] > '9')
		{
			return (-1);
		}
		i++;
	}
	return (1);
}
