#include "main.h"
/**
* _strchr - finds a ch in str
* @s: address of str
* @c: ch to find
* Return: 0
*/
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		return (s);
	}	while (s++);
	return (0);
}
