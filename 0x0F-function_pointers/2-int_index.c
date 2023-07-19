#include "function_pointers.h"
/**
 * int_index - index of first element
 * @array: array elements
 * @size: number of elements in array
 * @cmp: funtion to pointer to be used to compare values
 * Return: -1 if size < 0, no elemnt matches -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
