#include "main.h"
/**
* _memset- fills memory with constant byte
* @s: address of memory to print
* @b: constant byte to memory
* @n: size of memory to be at s
* Return: 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
