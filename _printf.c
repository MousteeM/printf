#include "main.h"

void print_array(char array[], int *arrayIndex)

/**
 * _printf - print output according to specified format
 * @format: format string containing the characters and the specifiers
 * Description: this function will .....
 * Return: printed characters
 */

int _printf(const char *format, ...)
{
	/* we're to declare our variables but idk what we'd call them yet*/
	char array[ARRAY_SIZE];
	va_list arguments;
	int i, arrayIndex = 0, count =  0;

	if (format == NULL)
		return(-1);

	va_start(arguments, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			array[arrayIndex++] = format[i];
			if (arrayIndex == ARRAY_SIZE)
				print_array(array, &arrayIndex);
			count++;
		}
		else
		{
			
		}
		print_array(array, &arrayIndex);

		va_end(arguments);
		return (count);

}

/**
 * print_array - prints existing content of array
 * @buffer: array of characters
 * @arrayIndex: length.
 */
void print_array(char array[], int *arrayIndex)
{
		if (*arrayIndex > 0)
			write(1, &array[0], *arrayIndex);

		*arrayIndex = 0;
}
