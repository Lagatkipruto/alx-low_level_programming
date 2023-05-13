#include "search_algos.h"

/**
* _binary_search - searches for a value in sorted array of integers using
* binary search algorithm.
* @array: a pointer to the first element of the array to search.
* @left: The starting index of the [sub]array to search.
* @right: The ending index of the [sub]array to search.
* @value: tjhe value of the element to search for.
*
* Return: If the value is not present or array is NULL, -1.
* Otherwise, the index where the value is recorded.
*
* Desc: Prints array being searched after each change.
*/
int _binary_search(int *array, size_t left, size_t right, int value)
{
size_t i;

if (array == NULL)
return (-1);

while (right >= left)
{
printf("Searching in array: ");
for (i = left; i < right; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);

i = left + (right - left) / 2;
if (array[i] == value)
return (i);
if (array[i] > value)
right = i - 1;
else
left = i + 1;

}

return (-1);
}

/**
* exponential_search - Searches for a value in a sorted array
* of integers using exponential search.
* @array: A pointer to the first element of the array to search.
* @size: The number of elements in the array.
* @value: The value to search for.
*
* Return: If the value is not present or the array is NULL, -1.
* Otherwise, the index where the value is located.
* Desc: Prints a value every time it is compared in the array.
*/
int exponential_search(int *array, size_t size, int value)
{

size_t left = 0, right;

if (array == NULL || size == 0)
return (-1);
right = size - 1;
while (left <= right)
{
size_t mid = left + (right - left) / 2;
if (array[mid] == value)
return (mid);

if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}

left = right / 2;
right = (left < (size - 1)) ? left + 1 : size - 1;
printf("Value found between indexes [%lu] and [%lu]\n", left, right);

return (_binary_search(array, left, right, value));
}
