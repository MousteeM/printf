#include <stdlib.h>
#include "main.h"

/**
 * printChar - prints a character
 * @arguments: va_list arguments from _printf
 * @str: string to store characters to be printed
 *
 * Return: number of char printed
 */
int printChar(va_list arguments, char *str)
{
	free(str);
	str = malloc(sizeof(char) * 2);
	if (!str)
		return (FAIL);

	str[0] = va_arg(arguments, int);
	str[1] = '\0';

	return (1);
}

/**
 * printString - loops through a string and prints
 * every character
 * @arguments: va_list arguments from _printf
 * @str: string to store characters
 *
 * Return: number of char printed
 */
int printString(va_list arguments, char *str)
{
	char *var = va_arg(arguments, char *);
	int i = 0, count = 0;

	if (!var)
		var = "(null)";

	for (count = 0; var[count] != '\0'; ++count)
		;
	free(str);
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (FAIL);

	/* copy var to str */
	while (var[i])
	{
		str[i] = var[i];
		i++;
	}
	str[i] = '\0';

	return (count);
}

/**
 * printPercent - print percent character to standard output
 * @a: variadic arguments
 * @str: buffer to store characters
 *
 * Return: number of characters printed (1)
*/
int printPercent(va_list a, char *str)
{
	a = a; /* unused variable error nullified */

	free(str);
	str = malloc(sizeof(char) * 2);
	if (!str)
		return (FAIL);

	str[0] = '%';
	str[1] = '\0';

	return (1);
}
