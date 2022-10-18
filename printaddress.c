#include "main.h"

/**
 * print_address - prints address of input in hexa format
 * @arguments: va_list arguments from _printf
 * Return: number of char printed
 */
int printAddress(va_list arguments)
{
		char *str;
		unsigned long int p = va_arg(arguments, unsigned long int);

		int count = 0;

		if (!p)
			return (_puts("(nil)"));
		str = convert(p, 16, 1);
		count += _puts("0x");
		count += _puts(str);
		return (count);
}
