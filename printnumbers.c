#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * printNumber - prints an integer
 * @arguments: variadic arguments list
 * @str: string to store number
 *
 * Return: number of chararcters printed
*/
int printNumber(va_list arguments, char *str)
{
	int tmp, num, count, i;

	tmp = num = count = i = 0;
	free(str);
	num = va_arg(arguments, int);
	tmp = num;

	for (count = 0; tmp; count++)
		tmp = tmp / 10;
	if (num == 0)
	count = 1; /* For loop will never run if num = 0 */
	if (num < 0)
		count++;
	str = malloc(sizeof(char) * (count + 1));/* plus null byte */
	if (num < 0)
	{
		num = num * -1;
		str[count - 1] = '-';
	}

	for (i = 0; i < count; ++i)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		if (!num)
			break;
	}
	str[count] = '\0';
	strRev(str);

	return (count);
}

