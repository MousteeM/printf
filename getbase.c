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

