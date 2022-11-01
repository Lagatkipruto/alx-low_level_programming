#include "main.h"
#include <stdlib.h>
/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the substring to search for
 *
 * Return: a pointer to the beggining of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{

	int i;
	int s = 0;

	while (needle[0] != '\0')
		s++;

	while (*haystack)
	{

		for (i = 0; needle[i]; i++)
		{

			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
