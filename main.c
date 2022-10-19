#include "main.h"
#include <stdio.h>

/**
 * main - tests code
 *
 * Return: Always 0
 */
int main(void)
{
	int ln;

	_printf("%c", 'H');
	ln = _printf("%s", "I am a string !");
	_printf("%d", ln);
	_printf("%i", ln);
	_printf("%%");
	_printf("%d", -762534);
return (0);
}
