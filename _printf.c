#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - print anything to standard output
 * @format: first arg
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int lent = 0;
	int a, b = 0;
	char *ch, *sh, *ph;
	const char *string;

	va_start(valist, format);
	if (format)
	{
		for (string = format; *string != '\0'; string++, lent++)
		{
			while (*string != '%' && *string != '\0')
			{
				_putchar(*string);
				 lent++;
				 string++;
			}
			if (*string == '\0')
			{
				break;
			}
			if (*string == '%')
			{
				string++;
			}
			switch (*string)
			{
				case 'c':
					a = va_arg(valist, int);
					_putchar(a);
					break;
				case 's':
					ch = va_arg(valist, char *);
					while (ch[b])
					{
						lent++;
						_putchar(ch[b]);
						b++;
					}
					lent--;
					break;
				case '%':
					_putchar('%');
					break;
				case 'd':
					sh = _itoa(va_arg(valist, int));
					while (sh[b])
					{
						lent++;
						_putchar(sh[b]);
						b++;
					}
					lent--;
					free(sh);
					break;
				case 'i':
					ph = _itoa(va_arg(valist, int));
					while (ph[b])
					{
						lent++;
						_putchar(ph[b]);
						b++;
					}
					lent--;
					free(ph);
					break;
			}
		}
	}
	va_end(valist);
	_putchar(10);
	return (lent);
}
