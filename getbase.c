#include <stdlib.h>
#include "main.h"

void getHexString(char *str, unsigned int hex, int hulk);

/**
 * getBinary - get the binary of an int
 * @arguments: va_list to access int
 * @str: buffer to store binary string
 *
 * Return: number of characters in str
*/
int getBinary(va_list arguments, char *str)
{
	unsigned int num, i, count, temp;

	count = i = 0;
	num = va_arg(arguments, unsigned int);
	temp = num;

	for (count = 0; temp != 1 && temp; ++count)
		temp /= 2;
	count++;

	free(str);
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (FAIL);

	while (TRUE)
	{
		if (num == 1 || num == 0)
		{
			str[i] = num + '0';
			i++;
			break;
		}

		str[i] = (num % 2) + '0';
		i++;
		num /= 2;
	}
	str[i] = '\0';
	strRev(str);

	return (count);
}


/**
 * getOctal - get the octal of an int
 * @arguments: va_list to access int
 * @str: buffer to store octal string
 *
 * Return: number of characters in str
*/
int getOctal(va_list arguments, char *str)
{
	unsigned int num, i, count, temp;

	count = i = 0;
	num = va_arg(arguments, unsigned int);
	temp = num;

	for (count = 0; temp >= 8; ++count)
		temp /= 8;
	count++;

	free(str);
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (FAIL);

	while (TRUE)
	{
		if (num <= 7)
		{
			str[i] = num + '0';
			i++;
			break;
		}

		str[i] = (num % 8) + '0';
		i++;
		num /= 8;
	}
	str[i] = '\0';
	strRev(str);

	return (count);
}

/**
 * getHEX - get the hexadecimal value of a variable
 * @arguments: va_list to get int
 * @str: buffer to store characters
 *
 * Return: number of characters in str
 * -1 if fails
 *  Description: alphabet part of hex are in upper case
*/
int getHEX(va_list arguments, char *str)
{
	unsigned int count = 0, hex, temp;

	hex = va_arg(arguments, unsigned int);

	temp = hex;
	/* find count */
	for (count = 0; temp >= 16; ++count)
		temp /= 16;
	count++;

	free(str);
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (FAIL); /* insufficient memory */

	getHexString(str, hex, 0);

	return (count);
}

/**
 * getHex - get the hexadecimal value of a variable
 * @arguments: va_list to get int
 * @str: buffer to store characters
 *
 * Return: number of characters in str
 * -1 if fails
 *  Description: alphabet part of hex are in lower case
*/
int getHex(va_list arguments, char *str)
{
	unsigned int count = 0, hex, temp;

	hex = va_arg(arguments, unsigned int);

	temp = hex;
	/* find count */
	for (count = 0; temp >= 16; ++count)
		temp /= 16;
	count++;

	free(str);
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (FAIL); /* insufficient memory */

	getHexString(str, hex, 32);

	return (count);
}

/**
 * getHexString - fill the buffer with hex characters
 * @str: buffer
 * @hex: int to convert to hex
 * @hulk: add to make hex characters upper or lower case
*/
void getHexString(char *str, unsigned int num, int hulk)
{
	int i = 0;

	while (TRUE)
	{
		if (num < 16)
		{
			str[i] = getHexChar(num, hulk);
			i++;
			break;
		}
		str[i] = getHexChar(num % 16, hulk);
		i++;
		num /= 16;
	}
	str[i] = '\0';
	strRev(str);
}
