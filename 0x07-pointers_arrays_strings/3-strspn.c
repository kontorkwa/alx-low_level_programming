#include "main.h"
/**
* _strspn- get lenght of a prefix substring
* @s: new location of byte
* @accept: old location of byte
* Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, k, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (counter != i)
		{
			break;
		}
	}
	for (k = 0; accept[k] != '\0'; k++)
	{
		if (s[i] == accept[k])
		counter++;
	}
	return (counter);
}
