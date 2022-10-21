#include <stdlib.h>
#include "main.h"

/**
 * getBinary - get the binary of an int
 * @arguments: va_list to access int
 * @str: buffer to store binary string
 *
 * Return: number of characters in str
*/
int getBinary(va_list arguments, char *str)
{
	int num, i, count, tmp;

	count = i = 0;
	num = va_arg(arguments, unsigned int);
	if (num < 0)
		num *= -1;
	tmp = num;

	for (count = 0; tmp != 1 && tmp; ++count)
		tmp /= 2;
	count++;

	free(str);
	str = malloc(sizeof(char) * (count + 1));

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
	int num, i, count, tmp;

	count = i = 0;
	num = va_arg(arguments, unsigned int);
	if (num < 0)
		num *= -1;
	tmp = num;

	for (count = 0; tmp >= 8; ++count)
		tmp /= 8;
	count++;

	free(str);
	str = malloc(sizeof(char) * (count + 1));

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

