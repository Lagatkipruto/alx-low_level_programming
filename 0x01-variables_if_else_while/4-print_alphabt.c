#include <stdio.h>

/**
 * main-program entry point.
 *
 * Return:0 if no error, non zero if error.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
		continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
