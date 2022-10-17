#include "main.h"

int prtNum(int num);

/**
 * printNumber - prints an integer
 * @arguments: variadic arguments list
 * Return: number of chararcters printed
*/
int printNumber(va_list arguments)
{
	int num, count;

	count = 0;
	num = va_arg(arguments, int);
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = num * -1;
	}

	count = prtNum(num);
	return (count);
}

/**
 * prtNum - print number using recursion
 * @num: number to print
 *
 * Return: number of characters printed
*/
int prtNum(int num)
{
	int count = 0;

	if (!(num / 10))
	{
		_putchar(num % 10 + '0');
		return (1);
	}

	count += prtNum(num / 10);
	_putchar(num % 10 + '0');
	return (count + 1);
}

