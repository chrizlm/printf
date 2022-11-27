#include "main.h"

/**
 * create_space - function
 * that creates space for the new string
 * Return: string
 */

char *create_space(void)
{
	char *space;

	space = malloc(sizeof(char) * 1024);
	if (space == NULL);
		return (NULL);
	return (space);
}
