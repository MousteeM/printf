#include "main.h"

/**
 * printNumber - prints an integer
 * @n: input
 * Return: number of chararcters printed
 */

int printNumber(int n)
{
	int a, b, i = 0, l = 0;

	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
			l = 1;
		}
		a = n / 10;
		b = n % 10;
		if (a != 0)
		{
			i = printNumber(a);
			i++;
			_putchar(b + '0');
		}
		else
		{
			_putchar(b + '0');
			i = 1;
		}
	}
	else
		_putchar('0');
	return (i + l);
}
/**
 * printUnsignedNum - prints out an unsigned integer
 * @n: unsigned int to be printed
 *
 * Return: integer
 */
int printUnsignedNum(unsigned int n)
{
	unsigned int a, b;
	int i = 0;

	if (n != 0)
	{
		a = n / 10;
		b = n % 10;
		if (a != 0)
		{
			i = printUnsignedNum(a);
			_putchar(b + '0');
			i++;
		}
		else
		{
			_putchar(b + '0');
			i = 1;
		}
	}
	else
		_putchar('0');
	return (i);
}
