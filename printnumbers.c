#include "main.h"

int prtNum(int num);

/**
 * printNumber - prints an integer
 * @n: input
 * Return: number of chararcters printed
*/
int printNumber(va_list arguments)
{
	int num;

	num = va_arg(arguments, int);
	if (num < 0)
		_putchar('-');

	prtNum(num);
}

/**
 * prtNum - print number using recursion
 * @num: number to print
 *
 * Return: number of characters printed
*/
int prtNum(int num)
{
	int count;

	if (!(num / 10))
	{
		_putchar(num % 10 + '0');
		return (1);
	}

	count += prtNum(num / 10);
	_putchar(num % 10 + '0');
	return (count + 1);
}

