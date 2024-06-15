#include "main.h"


/**
 * print_str - prints a string
 *
 * @str: the string
 *
 * Return: the number of strings
 */

int print_str(char *str)
{
	int i, count = 0;

	if (!str)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		count += _putchar(str[i]);
	}

	return (count);
}
