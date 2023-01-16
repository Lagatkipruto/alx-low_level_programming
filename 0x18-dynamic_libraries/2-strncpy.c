#include "main.h"

/**
 * _strncpy - copies a string in an inputted manner of bytes.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{

	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
