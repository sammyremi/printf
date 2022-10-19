#include <stdio.h>
#include <stdlib.h>
/**
 * _itoa - converts an integer to a string
 * @v: integer to be converted
 * Return: pointer
 */
char *_itoa(int v)
{
	char *ptr;

	ptr = malloc(4);
	sprintf(ptr, "%d", v);
	return (ptr);
}
