#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers -prints numbers followed by new line
* @n: The number of integers passed to the function.
* @separator: The string to be printed between numbers.
* @...: A variable number of numbers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));


		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}

