#include "main.h"
/**
 * print_sqaure - Prints a square using the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{

	int hgt, wid;

	if (size > 0)
	{

		for (hgt = 0; hgt < size; hgt++)
		{

			for (wid = 0; wid < size; wid++)
				putchar('#');

			if (hgt == size - 1)
				continue;
			putchar('\n');
		}
	}

	putchar('\n');
}
