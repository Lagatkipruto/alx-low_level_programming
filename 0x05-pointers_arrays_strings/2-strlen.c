#include "main.h"

/**
 * _strlen - Returns the length of string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(char *str)
{

	int len;

	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
