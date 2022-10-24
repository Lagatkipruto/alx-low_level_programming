#include "main.h"

/**
 * print_triangle - Prints a triangle, using character #.
 * @size: the size of a triangle.
 */
void print_triangle(int size)
{

	int hash, index;

	if (size > 0)
	{

		for (hash = 1; hash <= size; hash++)
		{

			for (index = size - hash; index > 0; index--)
				putchar(' ');

			for (index = 0; index < hash; index++)
				putchar ('#');

			if (hash == size)
				continue;

			putchar('\n');
		}
	}
	putchar('\n');
}
