#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @num: number whose last digit is to be printed
 *
 * Return: The last digit of @num
 */

int print_last_digit(int num)
{
	int last = num % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last_digit + '0');
        return (last);
}
