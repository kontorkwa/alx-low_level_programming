#include <stdio.h>
/**
* _memcpy - copies memory area
* @dest: address of new memory area
* @src: address of old memory area
* @n: byte value to copy
* Return: 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
