#ifndef MAIN_H
#define MAIN_H

/* macros */
#define TRUE 1
#define FALSE 0

/* including stdarg.h because of it's data types (e.g. va_list */
#include <stdarg.h>

/* _printf */
int _printf(const char *format, ...);

/* printvariable.c */
int printVariable(char *src, va_list arguments);

/* _putchar.c */
int _putchar(char c);

/* _strncpy.c */
char *_strncpy(char *dest, char *src, int n);

/* _strdup.c */
char *_strdup(const char *src);

#endif /* MAIN_H */
