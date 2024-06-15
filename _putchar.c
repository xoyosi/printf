#include "main.h"

/**
 * _putchar - prints characters
 *
 * @c: the char
 *
 * Return: the char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
