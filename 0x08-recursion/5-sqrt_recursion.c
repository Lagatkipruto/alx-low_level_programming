#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of inputted number.
 * @num: The Number to find square root of.
 * @root: The root to be tested.
 *
 *
 * Return: If the number is natural square root - the square root.
 *		if the number does nothave a natural square root -1.
 */
int find_sqrt(int num, int root)
{

	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number to be squared.
 *
 * Return: The square root of n. -1 if its not a natural square root.
 */
int _sqrt_recursion(int n)
{

	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
