#include <stddef.h>
#include <stdarg.h>
#include "main.h"

int checkSpecifier(char *specifier, char *str);

/**
 * printVariable - print appropriate variable to stdout
 * @str: string to check for specifiers
 * @arguments: va_list arguments
 *
 * Return: number of characters printed
*/
int printVariable(char *str, va_list arguments)
{
	int i, flag, count;
	prtFunc printFunctions[] = {
		{printChar, "%c"},
		{printNumber, "%d"},
		{printNumber, "%i"},
		{printString, "%s"},
		{printPercent, "%%"},
		{NULL, NULL}
	};

	count = flag = i = 0;
 /* for loop should iterate through printfunctions */
	for (i = 0; printFunctions[i].spec; ++i)
	{
		/* compare specifiers */
		flag = checkSpecifier(printFunctions[i].spec, str);
		if (flag) /* specifier matches */
		{
			count = printFunctions[i].func(arguments);
			return (count);
		}
	}

	if (str[1])
	{
		_putchar(str[0]);
		_putchar(str[1]);
		count = 2;
		return (count);
	}

	return (FAIL);
}

/**
 * checkSpecifier - check if specifier passed is at the begining of the string
 * @specifier: specifier to check
 * @str: string to search in
 *
 * Return: TRUE if specifier in string
 * 0 if specifier not in string
*/
int checkSpecifier(char *specifier, char *str)
{
	int i = 0;

	for (i = 0; specifier[i]; ++i)
	{
		if (specifier[i] != str[i])
			return (FALSE);/* specifier not at the begining of str */
	}

	return (TRUE); /* specifier at the begining of str */
}
