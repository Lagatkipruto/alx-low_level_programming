#include "main.h"
/**
 * _isupper - Checks for uppercase charcters.
 * @c: the characte to be checked
 *
 * Return: 1 if character is uppercas, 0 otherwise.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
