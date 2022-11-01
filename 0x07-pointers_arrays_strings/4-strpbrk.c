#include "main.h"
/**
* _strpbrk- searches a str for any of a set of bytes
* @s: char pointer
* @accept: char pointer
* Return: 0
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int counter;

	for (s = 0; *s != '\0'; s++)
	{
		for (counter = 0; accept[counter] != '\0'; counter++)
		{
			if (*s == accept[counter])
				return (s);
		}
	}
	retun(0);
}
