#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{

	int num, count;

	for (count = 0; num <= 14; count++)
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
