#include <stdlib.h>
#include "main.h"

/**
 * strRev - reverse a string
 * @str: string to reverse
*/
void strRev(char *str)
{
	int start, half, stop;
	char tmp;

	stop = start = half = 0;
	for (stop = 0; str[stop]; ++stop)
		;
	stop--;
	half = stop / 2;
	for (start = 0; start <= half; ++start, --stop)
	{
		tmp = str[start];
		str[start] = str[stop];
		str[stop] = tmp;
	}
}

/**
* _strcat - concactenate two strings
* @src: String to concactinate
* @dest: concactenate here
* @len: index to start concatenating
*
* Return: concatenated string
*/
int _strcat(char *dest, char *src, int len)
{
	int j = 0;

	for (j = 0; src[j]; j++, len++)
	dest[len] = src[j];
	dest[len] = '\0';
	return (len);
}

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string (success)
 * NULL if str = null
 * NULL if unsuccessful
*/
char *_strdup(const char *str)
{
	int i, len;
	char *dup;

	if (!str)
		return (0);

	for (len = 0; str[len]; ++len)
	;
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (0);

	/* duplicate str! */
	for (i = 0; i < len; ++i)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}

/**
 * getHexChar - gets the hex equivilent to int
 * @num: int to convert to hex character
 * @hulk: number to add to make upper or lower case
 *
 * Return: hex character
*/
char getHexChar(int num, int hulk)
{
	if (num <= 9)
		return (num + '0');

	switch (num)
	{
		case 10:
			return ('A' + hulk);
		case 11:
			return ('B' + hulk);
		case 12:
			return ('C' + hulk);
		case 13:
			return ('D' + hulk);
		case 14:
			return ('E' + hulk);
		case 15:
			return ('F' + hulk);
	}
	return ('\0');
}
