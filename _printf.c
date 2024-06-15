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
	int i = 0, count, j;

	while (*format && format[i] = count)
	{
		if (*format == '%')
		{
			switch (format[i] + 1)
			{
				case 'c':
					{
						_putchar(format);
					}
				case 's':
					{
						for(j = 0; j < count; j++)
						{
							_putchar(format);
						}
					}
				case '%':
					{
						_putchar("%");
					}
			}
		}
	}
}
