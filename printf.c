#include <stdlib.h>
#include "main.h"

/**
 * _printf - print output according to specified format
 * @format: format string containing the characters and the specifiers
 * @...: variables corresponding to the % specifiers
 * Description: this function will print to standard output
 * Return: number of printed characters
 * -1 if fails
 */

int _printf(const char *format, ...)
{
	char *tmpFormat;
	va_list arguments;
	int i, count;

	if (format == NULL)
		return (FAIL);/* No format passed */

	count = i = 0;
	va_start(arguments, format);
	tmpFormat = _strdup(format);
	for (i = 0; tmpFormat[i] != '\0'; i++)
	{
		if (tmpFormat[i] != '%')
		{
			_putchar(tmpFormat[i]);
			count++;
		}
		else
		{
			count += printVariable((tmpFormat + i), arguments);
			i++;/* skip the specifier */
		}
	}

		va_end(arguments);
		return (count);
}

