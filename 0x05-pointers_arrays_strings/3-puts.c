#include "main.h"
#include <string.h>
/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{

	while (*str)
		putchar(*str++);

	putchar('\n');
}
