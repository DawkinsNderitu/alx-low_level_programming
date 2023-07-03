#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory are to be filled
 * @b: THe constant byte
 * @n: THe number of bytes to be filled
 * Return: POinter to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
