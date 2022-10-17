#include "main.h"

/**
 * printChar - prints a character
 * @arguments: va_list arguments from _printf
 *
 * Return: number of char printed
 */
int printChar(va_list arguments)
{
	_putchar(va_arg(arguments, int));
	return (1);
}

/**
 * printString - loops through a string and prints
 * every character
 * @arguments: va_list arguments from _printf
 * Return: number of char printed
 */
int printString(va_list arguments)
{
	char *s = va_arg(arguments, char *);

	if (!s)
		s = "(null)";
	/* I'm not sure if this return function is correct */
	return (s);
}

/**
 * printPercent - print percent character to standard output
*/
void printPercent(void)
{
	putchar('%');

	return (1);
}
