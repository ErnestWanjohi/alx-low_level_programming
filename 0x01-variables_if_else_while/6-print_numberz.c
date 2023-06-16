#include <stdio.h>
/**
 * main - Entry point
 * Description 'prints number if base ten  using putchar'
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
