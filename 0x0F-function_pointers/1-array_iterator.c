#include "function_pointers.h"
/**
 * array_iterator - function to provide action on each array element
 * @array: array itself
 * @size: array size
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
