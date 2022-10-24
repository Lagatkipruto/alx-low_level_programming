#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints the numbers 0 to 14 ten times
 * void: No Input Parameter
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
void more_numbers(void)
{

	int num, count;

	for (count = 0; num <= 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{

			if (num > 9)
				putchar((num / 10) + '0');
			putchar((num % 10) + '0');
		}
		putchar('\n');
	}

}
