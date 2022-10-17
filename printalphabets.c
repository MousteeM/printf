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
	char *str = va_arg(arguments, char *);
	int i = 0, count = 0;

	if (!str)
		str = "";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
