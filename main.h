#ifndef MAIN_H
#define MAIN_H

/* comments above prototypes are the file the functions are in */

/* macros */
#define TRUE (1)
#define FALSE (0)
#define FAIL (-1)
#define BUFFERSIZE 1024

/* including stdarg.h because of it's data types (e.g. va_list */
#include <stdarg.h>

/* _printf */
int _printf(const char *format, ...);

/* printvariable.c */
int printVariable(char *src, va_list arguments, char *str);

/* _putchar.c */
int _putchar(char c);
int _puts(char *str);

/* printChar.c */
int printChar(va_list arguments, char *str);

/* printString.c */
int printString(va_list arguments, char *str);

/* printalphabets.c */
int printPercent(va_list, char *str);

/* getbase.c */
int getBinary(va_list arguments, char *str);
int getOctal(va_list arguments, char *str);
int getHex(va_list arguments, char *str);
int getHEX(va_list arguments, char *str);

/* convert.c */
char *convert(unsigned long int num, int base, int lowercase);

/**
 * struct printFunction - structure of print variable function
 * @spec: specifier
 * @func: Function
 **/
struct printFunction
{
	int (*func)(va_list, char *);
	char *spec;
};
typedef struct printFunction prtFunc;

/* printUnsignedNum */
int printUnsignedNum(unsigned int n);

/* printNumber */
int printNumber(va_list arguments, char *str);
int printUNumber(va_list arguments, char *str);

/* string.c */
void strRev(char *str);
int _strcat(char *dest, char *src, int len);
char *_strdup(const char *src);
char getHexChar(int num, int hulk);

#endif /* MAIN_H */
