#include "main.h"

/**
 * _strcpy - copies a string to a buffer.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;

	while (src[index])
	{

		dest[index] = src[index];
		index++;
	}

	return (dest);
}
