#include "main.h"

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

	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{

		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;
			} while (haystack[index] == needle[index]);

		}
		haystack++;
	}

	return ('\0');
}
