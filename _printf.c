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
	int count = 0, i;
	char *str;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format = *(format++);
			switch (*format)
			{
				case 'c':
					{
						count += _putchar(va_arg(args, int));
					}
				case 's':
					{
						str = va_arg(args, char *);
						while (*str)
						{
							count += _putchar(str);
							str++;
						}
					}
				case '%':
					{
						count += _putchar('%');
					}
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
