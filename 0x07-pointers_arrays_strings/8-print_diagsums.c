#include "main.h"
#include <stdio.h>
/**
* print_diagsums- sum diagonal values
* @a: pointer to array
* @size: int
* Return: sum of two sides
*/
void print_diagsums(int *a, int size)
{
	int i;
	long int sum = 0, sizem;

	sizem = size * size;
	for (i = 0; i < sizem; i += size + 1)
	{
		sum += a[i];
	}
	printf("%li, ", sum);
	for (i = size - 1; i <= sizem - size + 1; i += size - 1)
	{
		sum += a[i];
	}
	printf("%li\n", sum);
}
