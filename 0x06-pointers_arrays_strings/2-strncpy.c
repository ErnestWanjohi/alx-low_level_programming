#include "main.h"
/**
 * _strncpy - copies at most an inputted number
 * of bytes from string src into dest.
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: the maximim number of bytes to be copied from src
 * Return:A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (index = 0; src[index] != '\0'; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
