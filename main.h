#ifndef MAIN_H
#define MAIN_H

/* including stdarg.h because of it's data types (e.g. va_list */
#include <stdarg.h>

/* _printf */
int _printf(const char *format, ...);

/* printvariable.c */
int printVariable(char *src, va_list arguments);

/* _putchar.c */
int _putchar(char c);
int _puts(char *str);

/* _strncpy.c */
char *_strncpy(char *dest, char *src, int n);

/* _strdup.c */
char *_strdup(const char *src);

/* printChar.c */
int printChar(va_list arguments);

/* printString.c */
int printString(va_list arguments);

/* convert.c */
char *convert(unsigned long int num, int base, int lowercase;)
/**
 * struct printFunction - structure of print variable function
 * @spec: specifier
 * @func: Function
 **/
struct printFunction
{
	int (*func)(va_list);
	char *spec;
};
typedef struct printFunction prtFunc;

/* printUnsignedNum */
int printUnsignedNum(unsigned int n);

/* printNumber */
int printNumber(int n);

#endif /* MAIN_H */
