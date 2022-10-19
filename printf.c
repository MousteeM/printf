#include <stdio.h>
#include <unistd.h>
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
	char *tmpFormat, *str;
	char buffer[BUFFERSIZE];
	va_list arguments;
	int i, count, ret;

	if (format == NULL)
		return (FAIL);/* No format passed */

	ret = count = i = 0;
	va_start(arguments, format);
	tmpFormat = _strdup(format);
	str = malloc(1);/* allocated memory so free could be use */

	for (i = 0; tmpFormat[i] != '\0'; i++)
	{
		if (tmpFormat[i] != '%')
		{
			buffer[count] = tmpFormat[i]; /* copy it to custom buffer */
			count++;
		}
		else
		{
			ret = printVariable((tmpFormat + i), arguments, str);/* tmp to store the characters */
			if (ret < 0)
				return (FAIL);
			_strcat(buffer, str, count);
			count += ret;
			i++;/* skip the specifier */
		}
	}

	write(1, buffer, count);
		va_end(arguments);
		free(str);
		free(tmpFormat);
		return (count);
}

