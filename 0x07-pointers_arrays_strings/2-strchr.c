#include "main.h"
/**
* _strchr - finds a ch in str
* @s: address of str
* @c: ch to find
* Return: 0
*/
char *_strchr(char *s, char c)
{
	while (s[0] != '\0')
	{
		if (s[0] == c)
			return (s);
		else if (s[1] == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
