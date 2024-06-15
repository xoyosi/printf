#include "main.h"

/**
 * _printf - the actual printf
 *
 * @format: the character string
 *
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	char *str;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			switch (*format++)
			{
				case 'c':
					{
						_putchar(va_arg(args, int));
					}
				case 's':
					{
						str = va_arg(args, char *);
						while (*str)
						{
							_putchar(str);
							str++;
						}
					}
				case '%':
					{
						_putchar('%');
					}
			}
		}
		format++;
	}
	va_end(args);
}
