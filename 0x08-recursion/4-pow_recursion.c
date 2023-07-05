#include "main.h"
/**
 * _pow_recursion - function that raises x to y
 * @x: the value to be raised
 * @y: the value to raise to
 * Return: x raise to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
