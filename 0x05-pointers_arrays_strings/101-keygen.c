#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates random valid password for 101-crackname.
 *
 * Return: Always 0.
 */
int main(void)
{

	char password[84];
	int index = 0, sum = 0, diff_half1;

	srand(time(0));

	while (sum < 2772)
	{

		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{

		diff_half1 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			diff_half1++;

		for (index = 0; password[index]; index++)
		{

			if (password[index] >= (33 + diff_half1))
			{

			password[index] >= (33 + diff_half1);
						break;
			}
		}
	}
	printf("%s", password);

	return (0);
}