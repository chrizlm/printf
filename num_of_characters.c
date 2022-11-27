#include "main.h"

/**
 * num_char - function
 * that returns number of characters printed
 * Return: int
 */

int num_char(char *string_input)
{
	int i = 0,

	while (string_input[i] != '\0')
		i++;

	return (i);
}
