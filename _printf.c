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
	int a;
	char *ch, *sh, *ph;
	const char *string;

	va_start(valist, format);
	if (format)
	{
		for (string = format; *string != '\0'; string++, lent++)
		{
			while (*string != '%' && *string != '\0')
			{
				 putchar(*string);
				 lent++;
				 string++;
			}
			if (*string == '\0')
				break;
			if (*string == '%')
				string++;
			switch (*string)
			{
				case 'c':
					a = va_arg(valist, int);
					putchar(a);
					break;
				case 's':
					ch = va_arg(valist, char *);
					while (*ch != '\0')
					{
						lent++;
						putchar(*ch);
						ch++;
					}
					lent--;
					break;
				case '%':
					putchar('%');
					break;
				case 'd':
					sh = _itoa(va_arg(valist, int));
					while (*sh != '\0')
					{
						lent++;
						putchar(*sh);
						sh++;
					}
					lent--;
					break;
				case 'i':
					ph = _itoa(va_arg(valist, int));
					while (*ph != '\0')
					{
						lent++;
						putchar(*ph);
						ph++;
					}
					lent--;
					break;
				default :
					putchar('%');
					putchar(*string);
					lent++;
			}
		}
	}
	va_end(valist);
	return (lent);
}
