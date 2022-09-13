#include "main.h"
/**
 * print_last_digit - function that computes the absolute value of the integer
 * @c: is the init that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int c)
i{
	if (c > 0 || c == 0)
	{
		_putchar (c % 10 + '0');
		return (c % 10);
	}
	else
	{
		c = c * -1;
		_putchar (c % 10 + '0');
		return (c % 10);
	}
}
