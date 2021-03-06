#include "main.h"

/**
 * print_integerRecursive - makes a journey of the numbers
 * @n: is the number of the whole allocated
 * Return: 1.
 */

int print_integerRecursive(unsigned int n)
{
	unsigned int i, j;
	int count = 0;

	if (n != 0)
	{
		i = (n / 10);
		j = (n % 10);
		count += print_integerRecursive(i);
		count++;
		_putchar(j + '0');
		return (count);
	}
	return (0);
}

/**
 * print_integer - print a integer
 * @i: integer to print
 * Return: 1.
 */
int print_integer(va_list i)
{
	int j;
	int k = 0;
	unsigned int l;

	j = va_arg(i, int);
	if (j < 0)
	{
		_putchar('-');
		k = 1;
		l = j * -1;
	}
	else
		l = j;
	if (l > 9)
		return (k + print_integerRecursive(l));
	_putchar(l + '0');
	return (1 + k);
}
