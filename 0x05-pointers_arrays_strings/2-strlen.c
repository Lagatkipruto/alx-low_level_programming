#include "main.h"

/**
 * _strlen - Returns the length of string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
size_t _strlen(char *s)
{

	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
