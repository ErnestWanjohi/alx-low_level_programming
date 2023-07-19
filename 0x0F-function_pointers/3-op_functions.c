#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - function to add
 * @a: first int
 * @b: second int
 * Return: Result of add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function to subtract
 * @a: first int
 * @b: second int
 * Return: Result of sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function to multiply
 * @a: first int
 * @b: second int
 * Return: Result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function to divide
 * @a: first int
 * @b: second int
 * Return: Result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function to output modulus
 * @a: first int
 * @b: second int
 * Return: Result of modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
