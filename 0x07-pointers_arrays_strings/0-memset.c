#include "main.h"
/**
 * _memset - fills memory with constant  bytess,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(cha+:r *s, char b, unsigned int n)
{
	unsigned int i;

	for  (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
